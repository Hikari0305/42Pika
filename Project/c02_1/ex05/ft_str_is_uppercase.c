/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:18:33 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/13 11:46:57 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
//         char    a[]="HBSDJHBJ";
//         char    b[]="723gyuw";
//         char    c[]="";
//         int result_a = ft_str_is_uppercase(a);
//         int result_b = ft_str_is_uppercase(b);
//         int result_c = ft_str_is_uppercase(c);
//         printf("%d",result_a);
//         printf("%d",result_b);
//         printf("%d",result_c);
//         return (0);
// }
