NAME = libft.a
DYNAMIC = libft.so
CC = cc
CFLAGS = -Wall -Wextra -Werror -c
EXEC = a.out
ROOT = ./

# MANDATORY = $(wildcard $(ROOT)*.c)

MANDATORY		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
				ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
				ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_putstr_fd.c \
				ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c  \
				ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_strlen.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c

BONUS			= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
				ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(MANDATORY:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

.PHONY:  all clean fclean re so bonus

all: bonus $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS) : $(MANDATORY)
	$(CC) $(CFLAGS) $(MANDATORY)

so: $(DYNAMIC)

bonus: $(BONUS_OBJS)

	ar -rcs $(NAME) $(BONUS_OBJS)

$(BONUS_OBJS) : $(BONUS)
	$(CC) $(CFLAGS) $(BONUS)

$(DYNAMIC) : $(OBJS)

	$(CC) -fPIC $(CFLAGS) $(MANDATORY)
	gcc -shared -o $(DYNAMIC) $(OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME) $(DYNAMIC) $(EXEC) ./main/*.so

re: fclean all
