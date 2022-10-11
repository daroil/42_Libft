CC = gcc
SRCS = ft_isalpha.c ft_strlen.c main.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c \
		ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlccpy.c \
		

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


