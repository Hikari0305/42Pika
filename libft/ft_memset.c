/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 09:53:16 by hikari            #+#    #+#             */
/*   Updated: 2026/01/13 16:51:52 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *p;

    i = 0;
    p = (unsigned char*)b;
    while(i < len)
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return(b);
}

int main(void)
{
    void* a;
    char b[9];

    a = ft_memset(b,0, sizeof(b));
    printf("%s\n", (char*)a);
    return(0);
}