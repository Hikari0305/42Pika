/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:35:43 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/17 15:35:53 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char    **ft_split(char const *s, char c)
{
    char    **arr;
    size_t  word_len;
    size_t  i;
    size_t  j;

    if (!s)
        return (NULL);
    arr = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
    if (!arr)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        if (s[i] == '\0')
            break ;
        word_len = 0;
        while (s[i + word_len] != '\0' && s[i + word_len] != c) 
            word_len++;
        arr[j] = ft_substr(&s[i], 0, word_len);
        if (!arr[j])
            return (NULL); 
        i += word_len;
        j++;
    }
    arr[j] = NULL;
    return (arr);
}
