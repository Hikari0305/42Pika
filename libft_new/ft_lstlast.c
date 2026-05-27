/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:17:37 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/24 12:33:16 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	*head = NULL;

// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Hikari")));
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Yoshida")));
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("42Tokyo")));
// 	printf("%s\n", (char *)ft_lstlast(head)->content);
// 	return (0);
// }
