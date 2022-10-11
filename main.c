/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:50:01 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/11 18:51:00 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t  ft_strlen(char *s);

int main()
{
    char    c;
    char str[] = "Hello";
	char comp[] = "Hellp";
    char dst[] = "This is destination";
    char src[] = "socurce ficcle";
    char src2[] = "Abrakadabra";
    char buffer[64] = "this is ";
    char src3[] = "a very long string";

    printf("%zu \n",ft_strlen(str));
    printf("%s \n",str);
    printf("%s \n",ft_memset(str,'g',4));
    ft_bzero(str,1);
    printf("%s \n",str);
    printf("%s \n",dst);
    printf("%s \n",src);
    printf("%s \n",ft_memcpy(dst,src,5));
    printf("%s \n",dst);
    printf("%s \n",src2);
    printf("%s \n",ft_memmove(dst,src2,5));
    printf("%d \n",ft_strlcat(buffer,src3,64));
    printf("%s \n",buffer);
    
    c='Z';
    printf("%c \n",ft_tolower(c));
    printf("%c \n",ft_toupper(c));
    
    printf("%s \n",ft_strchr(src,'c'));
    printf("%s \n",ft_strrchr(src,'c'));

	printf("%d \n",ft_strncmp(str,comp,5));
    
    c=120;
    if (ft_isalpha(c))
        printf("is alpha!");
    if (ft_isdigit(c))
        printf("is digit!");
    if (ft_isalnum(c))
        printf("is alnum!");
    if (ft_isascii(c))
        printf("is ascii!");
    if (ft_isprint(c))
        printf("is printable!");
    return(0);
} 
