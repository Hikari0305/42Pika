/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 07:24:25 by hikari            #+#    #+#             */
/*   Updated: 2025/08/20 07:46:27 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i * i <= nb)
	{
		i++;
		if (i * i == nb)
			return (i);
		if (i * i > nb)
			return (0);
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_sqrt(9));
	return (0);
}