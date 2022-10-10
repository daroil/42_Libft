CC = gcc
CFLAGS = -I.


result: ft_isalpha.o ft_strlen.o
	$(CC) -Wall -Werror -Wextra -o result ft_isalpha.o ft_strlen.o