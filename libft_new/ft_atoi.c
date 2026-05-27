/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 14:18:11 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/24 09:49:58 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_space(char ch)
{
	if (ch == 32 || (ch >= 9 && ch <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (check_space(str[i]) == 1)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (result * sign > (long)INT_MAX)
		return (INT_MAX);
	if (result * sign < (long)INT_MIN)
		return (INT_MIN);
	return ((int)result * sign);
}

// int	main(void)
// {
//     printf("%d\n", ft_atoi("42"));
// 	printf("%d\n", ft_atoi("--42"));
// 	printf("%d\n", ft_atoi("\t\n\v\f\r 42"));
//     return (0);
// }
