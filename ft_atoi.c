/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:36:59 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/13 13:09:03 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_plus_or_minus(int c)
{
	if (c == '+' || c == '-')
		return(1);
	return(0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int sign;

	i = 0;
	sign = 1;
	result = 0;
	if (ft_is_plus_or_minus(str[i]))
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return(result * sign);	
}
