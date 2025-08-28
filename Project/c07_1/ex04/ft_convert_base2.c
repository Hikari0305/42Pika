/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:44:58 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/26 16:43:28 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	base_check(char *base);

char	*reverse(char *buffer, int i, int j)
{
	char	tmp;

	while (i < j)
	{
		tmp = buffer[i];
		buffer[i] = buffer[j];
		buffer[j] = tmp;
		i++;
		j--;
	}
	return (buffer);
}

char	*ft_itoa_base(int a, char *buffer, char *base_to, int base_len)
{
	int		i;
	long	num;

	i = 0;
	num = (long)a;
	if (num == 0)
	{
		buffer[0] = '0';
		buffer[1] = '\0';
		return (buffer);
	}
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		buffer[i++] = base_to[num % base_len];
		num = num / base_len;
	}
	if ((long)a < 0)
		buffer[i++] = '-';
	buffer[i] = '\0';
	return (reverse(buffer, 0, i - 1));
}

int	get_digits(long num, int base_len)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		num = num / base_len;
		count++;
	}
	return (count);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		a;
	int		digits;
	char	*c;

	if (base_check(base_from) == 0 || base_check(base_to) == 0)
		return (NULL);
	a = ft_atoi_base(nbr, base_from);
	digits = get_digits((long)a, base_check(base_to));
	c = malloc(sizeof(char) * (digits + 2));
	if (!c)
		return (NULL);
	return (ft_itoa_base(a, c, base_to, base_check(base_to)));
}

// int main(void)
// {
// 	char	c[] = "1010101";
// 	char	base_from[] = "01";
// 	char	base_to[] = "0123456789";
// 	char *result = ft_convert_base(c, base_from, base_to);
// 	printf("%s", result);
// 	free(result);
// 	return (0);
// }