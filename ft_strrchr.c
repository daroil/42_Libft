/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:17:14 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/11 17:23:51 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char* ft_strrchr(char* s, char c)
{
    int i;
    
    i=0;
    while(s[i]!='\0')
        i++;
    while(i!=0)
    {
        if(s[i]==c)
            return(&s[i]);
        i--;
    }
    if(s[i]==c)
        return(&s[i]);
    return(NULL);
}