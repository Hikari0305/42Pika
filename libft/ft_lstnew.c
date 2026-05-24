/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:18:00 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/24 13:12:11 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}

// int	main(void)
// {
// 	t_list	*room;

// 	room = ft_lstnew("Hello");
// 	if (room == NULL)
// 		return (1);
// 	printf("%s\n", (char *)room->content);
// 	printf("%p\n", room->next);
// 	free(room);
// 	return (0);
// }
