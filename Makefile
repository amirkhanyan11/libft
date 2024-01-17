NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ./

FILES = $(wildcard $(SRC)*.c)
OBJS = $(FILES:.c=.o)

.PHONY:  all clean fclean re

all: $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS) : $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
