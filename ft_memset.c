/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:44:49 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/12 11:27:56 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t len)
{
    size_t i;
	char *s1;
    if (!s)
        return(NULL);
	s1 = (char*)s;
    i=0;
    while(i != len && s1[i] != '\0')
    {
        s1[i] = c;
        i++;
    }
    return(s1);
}