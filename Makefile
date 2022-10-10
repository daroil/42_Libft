CC = gcc
 
CFLAGS = -Wall -Werror -Wextra -I.


result: ft_isalpha.o ft_strlen.o
	$(CC)  -o result ft_isalpha.o ft_strlen.o