/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:17:27 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/24 12:16:42 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}

// void print_content(void *content)
// {
//     if (content)
//         printf("%s\n", (char *)content);
// }

// int	main(void)
// {
// 	t_list	*head = NULL;

// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Hikari")));
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Yoshida")));
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("42Tokyo")));
// 	ft_lstiter(head, print_content);
// 	return (0);
// }
