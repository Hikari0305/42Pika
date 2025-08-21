/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:18:37 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/21 16:21:28 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int		i;
	char	*dest;
	int 	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = (char *)malloc(sizeof(char ) * (i + 1));
	if (dest == 0)
		return (0);
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int	main(void)
{
	char	a[10] = "Hello";
	printf("%s", ft_strdup(a));
	free(ft_strdup(a));
	return (0);
}