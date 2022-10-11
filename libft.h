/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:09:38 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/11 18:51:33 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char *s);
int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_isascii(char c);
int		ft_isprint(char c);
char*	ft_memset(char* s, char c, size_t len);
int		ft_bzero(char* s, size_t n);
char*	ft_memcpy(char* dst, char* src, size_t n);
char*	ft_memmove(char* dst, char* src, size_t len);
int		ft_strlcpy(char* dst, char* src, size_t size);
int		ft_strlcat(char* dst, char* src, size_t size);
char	ft_toupper(char c);
char	ft_tolower(char c);
char*	ft_strchr(char* s, char c);
char*	ft_strrchr(char* s, char c);
int		ft_strncmp(char *s1, char *s2, size_t n);

#endif