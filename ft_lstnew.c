#include "libft.h"
t_list *ft_lstnew(void *content)
{
	t_list	*lst;
	if (!(lst = (t_list*)malloc(sizeof(*lst))))
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
