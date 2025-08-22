/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 08:15:54 by hikari            #+#    #+#             */
/*   Updated: 2025/08/23 07:35:21 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_prime(int nb)
{
	int	n;

	if (nb % 2 == 0)
	{
		return (0);
	}
	n = 2;
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