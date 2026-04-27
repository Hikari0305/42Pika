/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 09:52:23 by hikari            #+#    #+#             */
/*   Updated: 2025/11/02 21:52:17 by hikari           ###   ########.fr       */
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

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t src_len;

    i = 0;
    src_len = ft_strlen(src);
    if(dstsize == 0)
        return (src_len);
    while (i < dstsize - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(src_len);
}

int main(void)
{
    char a[6];
    
    printf("%zu\n",ft_strlcpy(a, "Hello", sizeof(a)));
    return(0);
}