/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:17:06 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/23 12:19:33 by hyoshida         ###   ########.fr       */
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
