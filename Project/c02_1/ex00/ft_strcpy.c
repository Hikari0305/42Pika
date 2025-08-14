/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 08:13:06 by hikari            #+#    #+#             */
/*   Updated: 2025/08/13 11:39:42 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char	*dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (tmp);
}

// int	main(void)
// {
// 	char	a[120];
// 	char	b[120];

// 	strcpy(a, "Hello");
// 	strcpy(b, "Konnichiwa");
// 	ft_strcpy (a, b);
// 	printf("%s", a);
// 	return (0);
// }
