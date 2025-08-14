/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:21:10 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/13 11:39:53 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z' )))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
// 	char	a[120];
// 	char	b[120];
// 	char	c[120];
// 	int	result_a;
// 	int	result_b;
// 	int	result_c;

// 	strcpy(a, "Sttt");
// 	strcpy(b, "dr0");
// 	strcpy(c,"");
// 	ft_str_is_alpha(a);
// 	ft_str_is_alpha(b);
// 	result_a = ft_str_is_alpha(a);
// 	result_b = ft_str_is_alpha(b);
// 	result_c = ft_str_is_alpha(c);
// 	printf("%d", result_a);
// 	printf("%d", result_b);
// 	printf("%d", result_c);
// 	return (0);
// }
