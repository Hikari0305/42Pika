/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:18:08 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/24 13:11:59 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list	*head = NULL;

// 	ft_lstadd_back(&head, ft_lstnew("Hikari"));
// 	ft_lstadd_back(&head, ft_lstnew("Yoshida"));
// 	ft_lstadd_back(&head, ft_lstnew("42Tokyo"));
// 	printf("%d\n", ft_lstsize(head));
// 	return (0);
// }
