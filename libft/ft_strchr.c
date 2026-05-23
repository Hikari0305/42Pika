/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:36:02 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/17 15:36:35 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char    ch;

    ch = (char)c;
    while (*s != '\0')
    {
        if (*s == ch)
            return ((char *)s);
        s++;
    }
    if (ch == '\0')
        return ((char *)s);
    return (NULL);
}

// int main(void)
// {
// 	char str[] = "banana";
// 	char *p = ft_strrchr(str, "na");
// 	printf("%s\n", p);
// 	return (0);
// }
