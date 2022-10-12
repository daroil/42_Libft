/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:32:30 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/12 11:51:22 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *restrict dst, const void* src, size_t n)
{
    size_t i;
    
    i=0;
	s1 = (char*)s;
    while(src[i]!='\0' && i<=n)
    {
        dst[i]=src[i];
        i++;
    }
    return(dst);
}