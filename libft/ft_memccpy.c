/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:19:44 by hikari            #+#    #+#             */
/*   Updated: 2026/05/17 15:21:52 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		uc;

	i = 0;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	uc = (unsigned char)c;

	while (n > i)
	{
		d[i] = s[i];
		i++;
		if (s[i] == uc)
			return (void*)(&d[i]);
	}
	return (NULL);
}
