/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 06:12:10 by hikari            #+#    #+#             */
/*   Updated: 2025/08/25 08:35:13 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			count++;
		i++;
	}
	if (count % 2 == 0)
		return (1);
	else
		return (-1);
}

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

int	base_type(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	len_base;
	int	result;

	i = 0;
	result = 0;
	len_base = base_check(base);
	if (len_base == 0)
		return (0);
	while (ft_isspace(str[i]))
		i++;
	sign = ft_sign(&str[i]);
	while (base_type(str[i], base) != -1)
	{
		result = result * len_base + base_type(str[i], base);
		i++;
	}
	return (sign * result);
}
