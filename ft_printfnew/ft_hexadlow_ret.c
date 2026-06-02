/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadlow_ret.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 20:00:44 by hyoshida          #+#    #+#             */
/*   Updated: 2026/06/02 20:00:45 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadlow_ret(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_hexadlow_ret(n / 16);
	count += ft_write_ret("0123456789abcdef"[n % 16]);
	return (count);
}
