/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 21:54:54 by hikari            #+#    #+#             */
/*   Updated: 2026/05/17 15:39:38 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  dst_len;
    size_t  src_len;

    dst_len = 0;
    while (dst_len < dstsize && dst[dst_len] != '\0')
        dst_len++;
    src_len = ft_strlen(src);
    if (dstsize <= dst_len)
        return (dstsize + src_len);
    i = 0;
    while (i < dstsize - dst_len - 1 && src[i] != '\0')
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len);
}

// int main(void)
// {
// 	size_t a;
// 	char b[4] = "";
// 	a = ft_strlcat(b, "World", sizeof(b));
// 	printf("%zu\n", a);
// 	return(0);
// }
