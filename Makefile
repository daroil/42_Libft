CC = gcc
SRCS = ft_isalpha.c ft_strlen.c
NAME = result 
CFLAGS = -Wall -Werror -Wextra -I.

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all


