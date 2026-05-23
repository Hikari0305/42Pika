/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 21:54:54 by hikari            #+#    #+#             */
/*   Updated: 2025/11/03 09:52:35 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

size_t ft_strlen(const char *len)
{
    size_t i;

    i = 0;
    while(len[i] != '\0')
    {
        i++;
    }
    return(i);
}

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t dst_len;
    size_t src_len;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (dstsize == 0)
        return(src_len);
	if (dstsize > dst_len + 1)
	{
		i = 0;
		while(i < dstsize - dst_len - 1 && src[i] != '\0')
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
		return(dst_len + src_len);
	}
	else
	{
		return(src_len + dstsize);
	}
}

int main(void)
{
	size_t a;
	char b[4] = "";
	a = ft_strlcat(b, "World", sizeof(b));
	printf("%zu\n", a);
	return(0);
}