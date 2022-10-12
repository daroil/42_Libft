/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:41:39 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/12 11:29:51 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    if (c >= 'a' && c <= 'z')
        return(1);
    if (c >= 'A' && c <= 'Z')
        return(1);
    return(0); 
}