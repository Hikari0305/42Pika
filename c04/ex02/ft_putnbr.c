/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 21:27:10 by hikari            #+#    #+#             */
/*   Updated: 2025/08/16 09:12:37 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	pulasu(char *c, int n, int i)
{
	while (n > 0)
	{
		c[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	return i;
}


int	mainas(char *c, int n, int i)
{	
	write(1, "-", 1);
	n = -n;
	while (n > 0)
	{
		c[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	return i;
}

void	ft_putnbr(int nb)
{
	char	c[12];
	int i;

	i = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return;
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
		i = mainas(c, nb, i);
	else
		i = pulasu(c, nb, i);
	while (i > 0)
	{
		i --;
		write(1, &c[i], 1);
	}
}

int main(void)
{
    int a = -420;
    int b = 420;
	ft_putnbr(a);
	ft_putnbr(b);
	return (0);
}