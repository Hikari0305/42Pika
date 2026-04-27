#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_list;

	current = *lst;
	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		next_list = current -> next;
		ft_lstdelone(current, del);
		current = next_list;
	}
	*lst = NULL;
}