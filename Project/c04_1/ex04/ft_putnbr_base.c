/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 08:17:07 by hikari            #+#    #+#             */
/*   Updated: 2025/08/20 11:34:39 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putnbr_base(int nbr, char *base)
{
	int				base_len;
	unsigned int	i;
	char			c;

	base_len = base_check(base);
	if (base_len == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		i = -nbr;
	}
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	c = base[nbr % base_len];
	write(1, &c, 1);
}

int	main(void)
{
	char	c[] = "0123456789ABCDEF";
	ft_putnbr_base(-2147483648, c);
	return(0);
}