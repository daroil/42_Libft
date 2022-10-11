/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:49:13 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/11 16:03:44 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcpy(char* dst, char* src, size_t size)
{
    size_t i;
    char temp;

    i=0;
    while(i < size-1 && src[i]!='\0')
    {
        temp = src[i];
        dst[i]=temp;
        i++;
    }
    if (size != 0)
        dst[i]='\0';
    return(i);
}