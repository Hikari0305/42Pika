/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 14:18:49 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/17 15:47:00 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// int main(void)
// {
//     int b = ft_tolower('a');  // 'A'
//     int c = ft_tolower('z');  // 'Z'
//     int d = ft_tolower('A');  // 'A'
//     int e = ft_tolower('1');  // '1'
//     int f = ft_tolower('@');  // '@'
//     printf("%d\n", b);
//     return (0);
// }
