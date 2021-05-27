
SRCS	=	\
			ft_atoi.c		\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_strlen.c		\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memccpy.c	\
			ft_memmove.c	\
			ft_toupper.c	\
			ft_tolower.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc -c -o
LINKER	= ar rcs
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -g

${NAME}:	${OBJS}
			${LINKER} ${NAME} ${OBJS}

all:		${NAME}

clean:
			rm ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
