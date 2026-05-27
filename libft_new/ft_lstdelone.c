/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:17:17 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/24 12:33:16 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst -> content);
	free(lst);
}

// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*next_node;

// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Hikari")));
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Yoshida")));
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("42Tokyo")));
// 	next_node = head -> next;
// 	ft_lstdelone(head, free);
// 	head = next_node;
// 	printf("次の先頭： %s\n", (char *)head -> content);
// 	return (0);
// }
