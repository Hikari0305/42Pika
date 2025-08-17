/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 10:39:10 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/17 18:34:52 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	count_dest(char *dest)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}
int	count_src(char *src)
{
	int j;

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
	int count_dest;
	int	count_dest;

	dest_len = count_dest(dest);
	src_len = count_src(src);
	if (size == 0)
		return (src_len);
	else if (count_dest < size)
	{
		while (src[p] != '\0' && src_len < size - dest_len)
		{
			dest[dest_len] = src[p];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (src_len + dest_len - p);
	}
	else
		return (src_len + size);
}

int main(void)
{
    char	a[10] = "Hello";
    char	b[10] = "World";
    int result = ft_strlcat(a, b, 20);
	printf("%d", result);
}