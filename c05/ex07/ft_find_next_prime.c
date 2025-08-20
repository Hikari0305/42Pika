/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 08:15:54 by hikari            #+#    #+#             */
/*   Updated: 2025/08/20 14:51:13 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_sosuu(int nb)
{
	int	n;

	n = 2;
	while (n < nb)
	{
		if (nb % n == 0)
		{
			return (1);
		}
		n++;
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	if (nb == 2)
		return (3);
	while (check_sosuu(nb) == 1)
	{
		nb++;
	}
	return (nb);
}

int	main(void)
{
	printf("%d", ft_find_next_prime(4));
	return (0);
}