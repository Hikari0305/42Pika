/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:03:17 by hikari            #+#    #+#             */
/*   Updated: 2025/11/03 13:18:44 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *p;
	size_t i;
	const unsigned char *s;

	i = 0;
	p = (unsigned char*)dst;
	s = (const unsigned char *)src;
	if(p == s)
		return(dst);
	while(i < n)
	{
		p[i] = s[i];
		i++;
	}
	return(dst);
}

int main(void)
{
	void *a;
	char b[9] = "";
	
	a = ft_memcpy(b, "Hello", sizeof(b));
	printf("%s\n", (char*)a);
	return(0);
}