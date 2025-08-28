/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:10:43 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/21 10:22:22 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	i = 1;
	while (nb > 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(5));
// 	return (0);
// }