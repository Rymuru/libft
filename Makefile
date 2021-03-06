
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
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strncmp.c	\
			ft_strdup.c		\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_strnstr.c	\
			ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_strmapi.c	\
			ft_calloc.c		\
			ft_itoa.c		\
			ft_split.c		\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc -c -o
LINKER	= ar rcs
RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror

${NAME}:	${OBJS}
			${LINKER} ${NAME} ${OBJS}

all:		${NAME}

${OBJSD}%.o:    ${SRCSD}%.c
	${CC} $@ $^ ${CFLAGS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
