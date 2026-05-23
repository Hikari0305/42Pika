/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:55:48 by hikari            #+#    #+#             */
/*   Updated: 2025/11/03 14:10:05 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>


void *ft_memmove(void *dst, const void *src, size_t n)
{
   size_t i;
   unsigned char *d;
	const unsigned char *s;

	d = (unsigned char*)dst;
	s = (const unsigned char*)src;
	if(d == s || n == 0)
	 	return(dst);
	if(d < s)
	{
		i = 0;
		while(i < n)
		{
		  d[i] = s[i];
		  i++;
		}
	}
	else
	{
		i = n;
		while(i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return(dst);
}