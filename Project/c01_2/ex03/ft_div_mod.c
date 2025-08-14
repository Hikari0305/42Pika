/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 06:59:19 by hikari            #+#    #+#             */
/*   Updated: 2025/08/11 10:56:15 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;
// 	int	a;
// 	int	b;

// 	x = 20;
// 	y = 8;
// 	ft_div_mod(x, y, &a, &b);
// 	printf("div = %d, mod = %d\n", a, b);
// 	return (0);
// }
