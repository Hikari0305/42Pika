/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:13:54 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/13 11:39:57 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
// 	char	a[]="018347";
// 	char	b[]="723gyuw";
// 	char	c[]="";

// 	int result_a = ft_str_is_numeric(a);
// 	int result_b = ft_str_is_numeric(b);
// 	int result_c = ft_str_is_numeric(c);
// 	printf("%d",result_a);
// 	printf("%d",result_b);
// 	printf("%d",result_c);
// 	return (0);
// }	
