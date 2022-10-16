/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:37:39 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/16 14:17:38 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*second;
	t_list	*new_start;
	void	*tmp;

	if (!f || !del || lst == NULL)
		return (NULL);
	second = ft_lstnew(f(lst->content));
	if (second == NULL)
		return (NULL);
	new_start = second;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst->content);
		if (tmp != NULL)
			ft_lstadd_back(&second, ft_lstnew(tmp));
		else
			del(tmp);
		lst = lst->next;
	}
	return (new_start);
}
