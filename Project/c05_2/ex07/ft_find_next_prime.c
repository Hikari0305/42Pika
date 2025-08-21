/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 08:15:54 by hikari            #+#    #+#             */
/*   Updated: 2025/08/21 14:56:22 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_prime(int nb)
{
	int	n;

	n = 2;
	if (nb % 2 == 0)
	{
		return (0);
	}
	while (n < nb / n)
	{
		if (nb % n == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	if (nb == 2)
		return (2);
	while (!(check_prime(nb)))
	{
		nb++;
	}
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_find_next_prime(13));
// 	return (0);
// }