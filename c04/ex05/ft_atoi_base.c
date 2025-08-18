/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:24:11 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/18 17:14:06 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
		{
			return (0);
		}
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int base_type(int num_str, int len_base)
{
	int	result;

	result = 0;
	if (num_str >= len_base)
		base_type(num_str / len_base, len_base);
	result = num_str % len_base;
	return (result);
}

int    ft_atoi_base(char *str, char *base)
{
    int	len_base;
	int	i;
	int	sign;
	int num_str;

	len_base = base_check(base);
	i = 0;
	sign = 1;
	num_str = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sign = -1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			num_str = num_str * 10 + (str[i] - '0');
		}
		i++;
	}
	return (base_type(num_str, len_base) * sign);
}

int	main(void)
{
	char	a[] = "0123456789";
	char	b[] = "42";
	ft_atoi_base(b, a);
	char
	printf("%d", result);
	return (0);
}