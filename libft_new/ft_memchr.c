/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:21:58 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/24 14:01:33 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	ch;

	i = 0;
	p = (unsigned char *) s;
	ch = (unsigned char) c;
	while (i < n)
	{
		if (p[i] == ch)
			return (&p[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char data[] = {'A', 'B', 'C', 'D', 'E'};
//     printf("%p\n", ft_memchr(data, 'C', 5));
//     return (0);
// }
