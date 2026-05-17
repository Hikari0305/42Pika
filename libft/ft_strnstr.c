/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:43:11 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/17 15:44:23 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	j;

	i = 0;
	if (s2 == '\0')
		return (s1);
	while (s1 != '\0' && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && i + j < n)
		{
			if (s2[j + 1] == '\0')
				return (s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
    char *b = ft_strnstr("Hello World", "Hello", 5);
    printf("%s\n", b);
    return (0);
}
