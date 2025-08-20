/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 06:17:16 by hikari            #+#    #+#             */
/*   Updated: 2025/08/21 06:26:30 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_prime(int nb)
{
	int	n;

    if (nb % 2 == 0)
        return (0);
	n = 3;
	while (n < nb / n)
	{
		if (nb % n == 0)
		{
			return (0);
		}
		n = n + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	if (nb == 2)
		return (3);
	while (!(check_prime(nb)))
	{
		nb++;
	}
	return (nb);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_find_next_prime(13));
	return (0);
}