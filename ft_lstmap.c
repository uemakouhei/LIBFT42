/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuema </var/mail/kuema>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:11:19 by kuema             #+#    #+#             */
/*   Updated: 2021/11/06 19:29:12 by kuema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;

	new_node = NULL;
	new_list = NULL;
	if (!f)
		return (NULL);
	while (lst)
	{
		new_node = ft_lstnew(f(lst -> content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			ft_lstclear(&lst, del);
			return (lst);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst -> next;
	}
	if (!new_node)
		return (NULL);
	return (new_list);
}
