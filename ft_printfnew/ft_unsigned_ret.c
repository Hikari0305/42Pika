/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_ret.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 20:01:08 by hyoshida          #+#    #+#             */
/*   Updated: 2026/06/02 20:01:09 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_ret(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_unsigned_ret(n / 10);
	count += ft_write_ret((n % 10) + '0');
	return (count);
}
