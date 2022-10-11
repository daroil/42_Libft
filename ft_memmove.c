/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:08:46 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/11 16:02:07 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char* ft_memmove(char* dst, char* src, size_t len)
{
    size_t i;
    char temp;
    
    i=0;
    while(src[i]!='\0' && i<=len)
    {
        temp=src[i];
        dst[i]=temp;
        i++;
    }
    return(dst);
}
