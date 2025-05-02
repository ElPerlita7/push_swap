# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 19:59:47 by abferrer          #+#    #+#              #
#    Updated: 2025/04/30 17:31:06 by abferrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = push_swap.c stack.c operations.c
OBJS = $(SRCS:.c=.o)
LIBFT = libft/libft.a

all: $(NAME)
	
$(NAME): $(OBJS)
	cd libft && make 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

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


