/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:41:39 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/10 21:15:25 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"




int ft_isalpha(char c)
{
    if (c >= 'a' && c <= 'z')
        return(1);
    if (c >= 'A' && c <= 'Z')
        return(1);
    else
        return(0); 
}


int main()
{
    char    c;
    size_t  len;
    char *str = "HEllo!";

    len = ft_strlen(str);

    c='B';
    if (ft_isalpha(c))
        printf("works!");
    else
        printf("doesn't!");
    return(0);
} 
