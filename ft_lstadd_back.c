#include "libft.h"


void ft_lstadd_back(t_list **lst, t_list *new)
{

	t_list	*tmp;
	t_list	*head;

	tmp = *lst;
	head = tmp;
	while (tmp->next)
		tmp = tmp->next;
	tmp -> next = new;
	*lst = head;
}
