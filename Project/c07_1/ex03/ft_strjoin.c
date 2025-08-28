/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:25:10 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/26 15:48:37 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	len(char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;
	int	str_len;

	i = 0;
	j = 0;
	str_len = 0;
	while (sep[i] != '\0')
		i++;
	while (j < size)
	{
		k = 0;
		while (strs[j][k] != '\0')
		{
			k++;
		}
		str_len = str_len + k;
		j++;
	}
	return (str_len + i * (size - 1));
}

void	connect(char *result, int *k, char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		result[*k] = str[j];
		(*k)++;
		j++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (size == 0)
	{
		result = malloc(sizeof(char) * (1));
		result[0] = '\0';
		return (result);
	}
	result = malloc(sizeof(char) * (len(strs, sep, size) + 1));
	if (!result)
		return (NULL);
	while (i < size)
	{
		connect(result, &k, strs[i]);
		if (i++ < size - 1)
			connect(result, &k, sep);
	}
	result[k] = '\0';
	return (result);
}

int	main(void)
{
	char *a[] = {"", "Yoshida"};
	char b[] = "wxw";
	char *c = ft_strjoin(2, a, b);
	printf("%s", c);
	return (0);
}