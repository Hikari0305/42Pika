/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:11:24 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/13 11:46:49 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
// 	char	a[] ="yvhjsdsvch";
// 	char	b[] ="723gyuw";
// 	char	c[] ="";
// 	int result_a = ft_is_numeric(a);
//         int result_b = ft_is_numeric(b);
//         int result_c = ft_is_numeric(c);
//         printf("%d",result_a);
//         printf("%d",result_b);
//         printf("%d",result_c);
//         return (0);
// }
