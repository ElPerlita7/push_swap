CFLAGS = -Wall -Wextra -Werror
CC = cc
AR = ar rcs

NAME = libftprintf.a

SRCS =  ft_printf.c ft_utils.c

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re