/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:50:01 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/11 15:30:21 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t  ft_strlen(char *s);

int main()
{
    char    c;
    char str[] = "Hello";
    char dst[] = "This is destination";
    char src[] = "source file";
    char src2[] = "Abrakadabra";

    c=120;
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
