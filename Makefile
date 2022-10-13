CC = gcc
SRCS = ft_isalpha.c ft_strlen.c main.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c \
		ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
		ft_strnstr.c ft_atoi.c ft_calloc.c

NAME = libft.a 
OBJ	= $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra -I.

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 

result:
	$(CC) $(CFLAGS) -o result $(SRCS)
	
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

reclean: fclean
	rm -f result

rere: reclean result