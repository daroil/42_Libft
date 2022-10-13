/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:19:05 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/13 14:15:03 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	total_size;

	total_size = count * size;
	str = malloc(total_size);
	if (!str)
		return(NULL);
	ft_bzero(str,total_size);
	return(str);
}
