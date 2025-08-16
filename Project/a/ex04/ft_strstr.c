/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 07:52:43 by hikari            #+#    #+#             */
/*   Updated: 2025/08/15 10:48:29 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char	*to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while (str[i] == to_find[j])
			{
				i++;
				j++;
				return (&str[i - j]);
			}
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char    a[] = "Hello World";
//     char    b[] = "World";
// 	char	*result = ft_strstr(a, b);
// 	printf("%s", result);
// 	return (0);
// }