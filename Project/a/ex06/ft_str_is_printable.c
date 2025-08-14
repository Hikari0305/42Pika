/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:15:57 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/13 11:47:00 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 48))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
//         char    a[]="018347";
//         char    b[]="723gyuw";
//         char    c[]="";
//         int result_a = ft_str_is_printable(a);
//         int result_b = ft_str_is_printable(b);
//         int result_c = ft_str_is_printable(c);
//         printf("%d",result_a);
//         printf("%d",result_b);
//         printf("%d",result_c);
//         return (0);
// }
