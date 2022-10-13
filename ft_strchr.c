/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:52:03 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/13 15:53:43 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    int i;
    char *s1;

	s1 = (char*)s;
    i = 0;
    while(s1[i]!='\0')
    {
        if(s1[i]==(char)c)
            return(&s1[i]);
        i++;
    }
    if(s1[i]==c)
        return(&s1[i]);
    return(NULL);
}
