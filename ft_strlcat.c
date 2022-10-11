/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:07:59 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/11 16:33:11 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcat(char* dst, char* src, size_t size)
{
    size_t i;
    char temp;
    
    i=0;
    while(dst[i]!='\0')       
        i++;
    while(i<size && *src)
    {
        temp = *src++;
        dst[i]=temp;
        i++;
    }
    if (size != 0)
        dst[i]='\0';
    return(i);
}