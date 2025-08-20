/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 07:57:21 by hikari            #+#    #+#             */
/*   Updated: 2025/08/20 17:05:04 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb <= 1)
		return (0);
	while (n <= nb - 1)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

// int main(void)
// {
//     printf("%d", ft_is_prime(5));
//     return (0);
// }