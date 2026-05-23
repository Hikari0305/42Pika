/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:19:44 by hikari            #+#    #+#             */
/*   Updated: 2025/11/03 13:38:21 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t	i;
    unsigned char *d;
	const char *s;
	unsigned char uc = (unsigned char)c;

	i = 0;
	d = (unsigned char*)dst;
	s = (const char*)src;

	while(n > i)
	{
		d[i] = s[i];
		i++;
		if(s[i] == uc)
			return(void*)(&d[i]);
	}
	return(NULL);
}