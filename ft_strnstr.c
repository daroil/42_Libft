/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:15:44 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/13 13:12:56 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	fir_oc;
	char	*haystack1;

	i = 0;
	haystack1 = (char *) haystack;
	if (!needle)
		return (haystack1);
	while (haystack1[i] != '\0' && i < len)
	{
		fir_oc = i;
		j = 0;
		while (haystack1[i] == needle[j])
		{
			if (needle[j] == '\0')
				return (&haystack1[fir_oc]);
			i++;
			j++;
		}
		if (needle[j] == '\0')
				return (&haystack1[fir_oc]);	
		i++;
	}
	return (NULL);
}
