/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:43:46 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/10 19:49:51 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int ft_isdigit(char c)
{
    if (c>= '0' && c<='9')
        return(1);
    return(0);    
}


int main()
{
    char    c;
    size_t  len;
    char *str = "HEllo!";


    c='5';
    if (ft_isdigit(c))
        printf("works!");
    else
        printf("doesn't!");
    return(0);
} 