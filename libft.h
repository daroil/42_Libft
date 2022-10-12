/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:09:38 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/12 11:32:36 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char *s);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void*	ft_memset(void* s, int c, size_t len);
void 	ft_bzero(void *s, size_t n);
char*	ft_memcpy(char* dst, char* src, size_t n);
char*	ft_memmove(char* dst, char* src, size_t len);
int		ft_strlcpy(char* dst, char* src, size_t size);
int		ft_strlcat(char* dst, char* src, size_t size);
char	ft_toupper(char c);
char	ft_tolower(char c);
char*	ft_strchr(char* s, char c);
char*	ft_strrchr(char* s, char c);
int		ft_strncmp(char *s1, char *s2, size_t n);
char* 	ft_memchr(char *s1, char c, size_t n);
int 	ft_memcmp(char *s1, char *s2, size_t n);

#endif