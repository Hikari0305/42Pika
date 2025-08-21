/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 06:36:38 by hikari            #+#    #+#             */
/*   Updated: 2025/08/18 10:24:20 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	count_dest(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	count_src(char *src)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	return (j);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	p;
	unsigned int	dest_len;
	unsigned int	src_len;

	p = 0;
	dest_len = count_dest(dest);
	src_len = count_src(src);
	if (size == 0)
		return (src_len);
	else if (dest_len < size)
	{
		while (src[p] != '\0' && dest_len + p < size - 1)
		{
			dest[dest_len + p] = src[p];
			p++;
		}
		dest[dest_len + p] = '\0';
		return (src_len + dest_len);
	}
	else
		return (src_len + size);
}

// int main(void)
// {
//     char	a[20] = "Hello";
//     char	b[10] = "World";
//     int result = ft_strlcat(a, b, 20);
// 	printf("%d", result);
// }