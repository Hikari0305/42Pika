/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_ret.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 20:01:04 by hyoshida          #+#    #+#             */
/*   Updated: 2026/06/02 20:01:05 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string_ret(char *s)
{
	int	count;
	int	i;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		count += ft_write_ret(s[i]);
		i++;
	}
	return (count);
}
