/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:17:06 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/17 15:17:09 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
