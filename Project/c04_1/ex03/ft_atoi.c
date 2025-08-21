/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 05:59:36 by hikari            #+#    #+#             */
/*   Updated: 2025/08/19 17:41:12 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(char c)
{
	if (c >= 9 && c <= 13)
		return (1);
	if (c == 32)
		return (1);
	return (0);
}

int	ft_sign(char *c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
		{
			count++;
		}
		i++;
	}
	if (count % 2 == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	while (ft_isspace(str[i]))
	{
		i++;
	}
	sign = ft_sign(&str[i]);
	while (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

// int	main(int argc, char **argv)
// {
// 	int num;
// 	if (argc != 2)
// 	{
// 		return (0);
// 	}
// 	num = ft_atoi(argv[1]);
// 	printf("%d", num);
// 	return (0);
// }