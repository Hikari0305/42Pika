/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:23:20 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/24 13:50:29 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*arr_1;
	unsigned char	*arr_2;

	arr_1 = (unsigned char *) s1;
	arr_2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (arr_1[i] != arr_2[i])
			return (arr_1[i] - arr_2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char a[] = {'A', '\0', 'B'};
//     char b[] = {'A', '\0', 'C'};
//     printf("%d\n", ft_memcmp(a, b, 3));
//     return (0);
// }
