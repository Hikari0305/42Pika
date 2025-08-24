/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 06:11:52 by hikari            #+#    #+#             */
/*   Updated: 2025/08/25 08:37:55 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	base_check(char *base);

char	*reverse(char *buffer, int i, int j)
{
	while (i < j)
	{
		char	tmp;

		tmp = buffer[i];
		buffer[i] = buffer[j];
		buffer[j] = tmp;
		i++;
		j--;
	}
	return (buffer);
}

char	*ft_itoa_base(int a, char *buffer, int base_len)
{
	long	num;
    int		i;
	int		j;

	i = 0;
	j = 0;
	num = (long)a;
	if (base_len < 2 || base_len > 32)
		return (buffer);
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
		j = (int)num % base_len;
		if (j < 10)
			buffer[i] = '0' + j;
		else
			buffer[i] = 'A' + (j - 10);
		num = num / base_len;
		i++;
	}
	if ((long)a < 0)
		buffer[i++] = '-';
	buffer[i] = '\0';
	return (reverse(buffer, 0, i - 1));
}

int	get_digits(long num, int base_len)
{
	int count;

	count = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		num = -num;
	while ( (num > 0))
	{
		num = num/ base_len;
		count++;
	}
	return (count);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int		a;
	int		digits;
    char    *c;
    
	if (base_check(base_from) == 0 || base_check(base_to) == 0)
		return (NULL);
	a = ft_atoi_base(nbr, base_from);
	digits = get_digits((long)a, base_check(base_to));
    c = (char *)malloc(sizeof(char) * (digits + 2));
	if (!c)
		return (NULL);
	return (ft_itoa_base(a, c, base_check(base_to)));
}

// int main(void)
// {
// 	char	c[] = "1A";
// 	char	base_from[] = "0123456789ABCDEF";
// 	char	base_to[] = "0123456789";
// 	char *result = ft_convert_base(c, base_from, base_to);
// 	printf("%s", result);
// 	free(result);
// 	return (0);
// }