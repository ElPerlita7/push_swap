# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 19:59:47 by abferrer          #+#    #+#              #
#    Updated: 2025/09/16 17:00:19 by abferrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -I libft
SRCS = push_swap.c utils_stack.c operations_push.c operations_swap.c \
operations_rotate.c operations_reverse.c parse_arg.c parse_stack.c sort.c \
simple_sort.c
OBJS = $(SRCS:.c=.o)
LIBFT = libft/libft.a

all: $(NAME)
	
$(NAME): $(OBJS)
	cd libft && make 
	$(CC) -o $(NAME) $(OBJS) $(LIBFT)

$(LIBFT): 
	make -C libft

%.o: %.c $(LIBFT)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


