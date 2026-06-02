/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_ret.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 20:00:19 by hyoshida          #+#    #+#             */
/*   Updated: 2026/06/02 20:05:04 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptr_hex(unsigned long num)
{
	int	count;

	count = 0;
	if (num >= 16)
		count += ft_ptr_hex(num / 16);
	count += ft_write_ret("0123456789abcdef"[num % 16]);
	return (count);
}

int	ft_pointer_ret(unsigned long ptr)
{
	int	count;

	count = 0;
	if (ptr == 0)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	count += write(1, "0x", 2);
	count += ft_ptr_hex(ptr);
	return (count);
}
