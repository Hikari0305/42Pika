/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:02:39 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/20 14:48:59 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	i = nb;
	while (power > 1)
	{
		i = i * nb;
		power--;
	}
	return (i);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(2,2));
// 	return (0);
// }