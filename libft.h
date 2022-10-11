#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>

size_t  ft_strlen(char *s);
int     ft_isalpha(char c);
int     ft_isdigit(char c);
int     ft_isalnum(char c);
int     ft_isascii(char c);
int     ft_isprint(char c);
char*   ft_memset(char* s, char c, size_t len);
int     ft_bzero(char* s, size_t n);
char*   ft_memcpy(char* dst, char* src, size_t n);
char*   ft_memmove(char* dst, char* src, size_t len);
int     ft_strlcpy(char* dst, char* src, size_t size);

#endif