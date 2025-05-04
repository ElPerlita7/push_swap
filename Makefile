# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 19:59:47 by abferrer          #+#    #+#              #
#    Updated: 2025/05/04 21:34:02 by abferrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = push_swap.c stack.c operations_push.c operations_swap.c operations_rotate.c
OBJS = $(SRCS:.c=.o)
LIBFTA = libft/libft.a

all: $(NAME)
	
$(NAME): $(OBJS)
	cd libft && make 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFTA)

$(LIBFT): 
	make -C libft

%.o: %.c $(LIBFT)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	cd libft && make fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


