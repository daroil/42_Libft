/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:07:59 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/13 16:29:00 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
	size_t dst_len;
	size_t src_len;
    
    i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
    while(dst[i] != '\0')       
        i++;
	if (dstsize > 0)
	{
		while(i < (dstsize - 1 - dst_len) && src[i] != '\0')
		{
			dst[i]=src[i];
			i++;
		}
		dst[i]='\0';
	}
	while(src[i] != '\0')
		i++;	
    return(i);
}