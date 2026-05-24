/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:16:14 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/24 11:44:16 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last -> next = new;
}

// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*lst;

// 	ft_lstadd_back(&head, ft_lstnew("Hikari"));
// 	ft_lstadd_back(&head, ft_lstnew("Yoshida"));
// 	ft_lstadd_back(&head, ft_lstnew("42Tokyo"));
// 	lst = head;
// 	while (lst != NULL)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// 	return (0);
// }
