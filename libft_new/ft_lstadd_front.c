/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:16:48 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/24 11:36:11 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*lst;

// 	ft_lstadd_front(&head, ft_lstnew("Hikari"));
// 	ft_lstadd_front(&head, ft_lstnew("Yoshida"));
// 	ft_lstadd_front(&head, ft_lstnew("42Tokyo"));
// 	lst = head;
// 	while (lst != NULL)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// 	return (0);
// }
