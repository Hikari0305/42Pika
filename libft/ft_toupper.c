/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 14:18:38 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/17 15:47:33 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int a)
{
	if (a >= 'a' || a <= 'z')
		a -= 32;
	return (a);
}

int main(void)
{
    int b = ft_toupper('a');  // 'A'
    int c = ft_toupper('z');  // 'Z'
    int d = ft_toupper('A');  // 'A'
    int e = ft_toupper('1');  // '1'
    int f = ft_toupper('@');  // '@'
    printf("%d\n", b);
    return (0);
}
