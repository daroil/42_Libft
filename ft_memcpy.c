/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:32:30 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/13 14:52:59 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void* src, size_t n)
{
    size_t	i;
    
	char	*s1;
	char	*s2;
    i=0;
	s1 = (char*)dst;
	s2 = (char*)src;
    while(i < n)
    {
		s1[i] = s2[i];
        i++;
    }
    return(s1);
}