/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:20:05 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/24 12:49:38 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_element = ft_lstnew(f(lst -> content));
		if (new_element == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		lst = lst -> next;
	}
	return (new_list);
}

// void *upper_content(void *content)
// {
//     if (!content)
//         return (NULL);

//     char *str = (char *)content;
//     char *new_str = malloc(ft_strlen(str) + 1);
//     if (!new_str)
//         return (NULL);

//     int i = 0;
//     while (str[i])
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//             new_str[i] = str[i] - 32;
//         else
//             new_str[i] = str[i];
//         i++;
//     }
//     new_str[i] = '\0';
//     return (new_str);
// }

// void delete_content(void *content)
// {
//     free(content);
// }

// void print_list(t_list *lst)
// {
//     while (lst)
//     {
//         printf("[%s] -> ", (char *)lst->content);
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }

// int main(void)
// {
//     t_list  *old_list = NULL;
//     t_list  *new_list = NULL;

//     ft_lstadd_back(&old_list, ft_lstnew(ft_strdup("hikari")));
//     ft_lstadd_back(&old_list, ft_lstnew(ft_strdup("yoshida")));
//     ft_lstadd_back(&old_list, ft_lstnew(ft_strdup("42tokyo")));
//     printf("元のリスト:\n");
//     print_list(old_list);
//     printf("\n");
//     new_list = ft_lstmap(old_list, upper_content, delete_content);
//     printf("ft_lstmap 実行後の新しいリスト:\n");
//     print_list(new_list);
//     printf("\n");
//     ft_lstclear(&old_list, delete_content);
//     ft_lstclear(&new_list, delete_content);

//     return (0);
// }
