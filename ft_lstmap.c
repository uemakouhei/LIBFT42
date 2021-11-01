#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;

	new_node = ft_lstnew(f(lst -> content));
	if (new_node)
	{
		new_list = new_node;
		lst = lst -> next;
	}
	while (lst)
	{
		new_node = ft_lstnew(f(lst -> content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			ft_lstclear(&lst, del);
			break ;
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst -> next;
	}
	if (!new_node)
		return (NULL);
	return (new_list);
}
