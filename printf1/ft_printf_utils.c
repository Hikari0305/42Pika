/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 07:38:45 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/29 08:34:22 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_putstr_ret(char *s)
{
	int	len;

	if (!s)
		s = "(null)";
	len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	return (len);
}

int	ft_check_format(char specifier, va_list args)
{
	int		count;
	int		c;
	char	*str;

	count = 0;
	if (specifier == 'c')
	{
		c = va_arg(args, int);
		ft_putchar_fd(c, 1);  
		count += 1;
	}
	else if (specifier == 's')
	{
		str = va_arg(args, char *);
		count += ft_putstr_ret(str);
	}
	return (count);
}
