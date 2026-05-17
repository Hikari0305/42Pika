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

#include <stdio.h>

int	ft_tolower(int a)
{
	if (a >= 'A' || a <= 'Z')
		a += 32;
	return (a);
}

int main(void)
{
    int b = ft_tolowerr('a');  // 'A'
    int c = ft_tolower('z');  // 'Z'
    int d = ft_tolower('A');  // 'A'
    int e = ft_tolower('1');  // '1'
    int f = ft_tolower('@');  // '@'
    printf("%d\n", b);
    return (0);
}
