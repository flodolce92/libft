SRCS		=	ft_memset.c \
				ft_strrchr.c \
				ft_isprint.c \
				ft_isascii.c \
				ft_tolower.c \
				ft_strlcpy.c \
				ft_strchr.c \
				ft_bzero.c \
				ft_strdup.c \
				ft_strncmp.c \
				ft_toupper.c \
				ft_memcpy.c \
				ft_memcmp.c \
				ft_isdigit.c \
				ft_strlen.c \
				ft_memmove.c \
				ft_strlcat.c \
				ft_atoi.c \
				ft_isalpha.c \
				ft_memchr.c \
				ft_isalnum.c

OBJS		= $(SRCS:.c=.o)

NAME		= libft.a

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

all:		$(NAME)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re