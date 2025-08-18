/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 08:17:07 by hikari            #+#    #+#             */
/*   Updated: 2025/08/18 15:30:26 by hyoshida         ###   ########.fr       */
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
			return (0);
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

int	ft_isspace(char c)
{
	if (c == '\t'|| c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_sign(char *c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (c[i] == '-' || c[i] == '+')
	{
		if(c[i] == '-')
			count++;
		i++;
	}
	if (count % 2 == 0)
		return (1);
	else
		return (-1);
}

int	base_type(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if(base[i] == c)
			return(i);
		i++;
	}
	return (-1);
}

int    ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int len_base;
	int num;

	i = 0;
	len_base = base_check(base);
	while (ft_isspace(str[i]))
		i++;
	sign = ft_sign(&str[i]);
	while (num = base_type(str[i], base) != -1)
	{
		
	}
	return (sign *);
}

int	main(void)
{
	char	a[] = "0123456789";
	char	b[] = "1A";
	ft_atoi_base(b, a);
	printf("%d", ft_atoi_base(b, a));
	return (0);
}
