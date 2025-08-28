/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 05:35:33 by hikari            #+#    #+#             */
/*   Updated: 2025/08/28 15:29:49 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (!*str)
			break ;
		count++;
		while (*str && !is_sep(*str, charset))
			str++;
	}
	return (count);
}

char	*copy_word(char *p, int len)
{
	char	*w;
	int		i;

	w = (char *)malloc((len + 1) * sizeof(char));
	if (!w)
		return (0);
	i = 0;
	while (i < len)
	{
		w[i] = p[i];
		i++;
	}
	w[i] = '\0';
	return (w);
}

char	**ft_split(char *str, char *charset)
{
	char	**a;
	int		i;
	char	*start;

	a = (char **)malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (!a)
		return (0);
	i = 0;
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (!*str)
			break ;
		start = str;
		while (*str && !is_sep(*str, charset))
			str++;
		a[i] = copy_word(start, (int)(str - start));
		if (!a[i])
			return (NULL);
		i++;
	}
	a[i] = NULL;
	return (a);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     char **arr;
//     int   i;

//     arr = ft_split("Hello,42Tokyo!C;Piscine", ",;!");
//     if (!arr)
//         return (1);
//     i = 0;
//     while (arr[i] != NULL)
//     {
//         printf("%s\n", arr[i]);
//         free(arr[i]);
//         i++;
//     }
//     free(arr);
//     return (0);
// }
