CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -c

NAME	= libft.a

SRC	= srcs
INC	= includes

SRCS	= ${SRC}/ft_putchar.c ${SRC}/ft_swap.c ${SRC}/ft_putstr.c ${SRC}/ft_strlen.c ${SRC}/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}

RM		= rm -f

all:		${NAME}

%.o: %.c
			${CC} ${CFLAGS} $< -o $@ -I ${INC}

${NAME}:	${OBJS}
			ar -cr $@ ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
