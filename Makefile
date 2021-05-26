
SRCS	= ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft

CC		= cc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -g

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			cc -o ${NAME} ${OBJS}

all:		{$NAME}

clean:
			rm ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
