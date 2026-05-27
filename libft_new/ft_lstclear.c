/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:17:06 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/24 12:34:26 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_list;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		next_list = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_list;
	}
}


// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*lst;

// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Hikari")));
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Yoshida")));
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("42Tokyo")));
// 	lst = head;
// 	ft_lstclear(&head, free);
// 	if (head == NULL)
// 	{
// 		printf("head は NULL になりました\n");
// 	}
// 	else
// 	{
// 		printf("head が NULL になっていません\n");
// 	}
// 	return (0);
// }
