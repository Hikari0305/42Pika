/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:45:18 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/13 11:45:50 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	tmp = dest;
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (tmp);
}

// int main(void)
// {
// 	char	a[120];
// 	char	b[120];
// 	int o;
// 	o = 15;
// 	strcpy(a, "Hello");
// 	strcpy(b, "Konnnichiwa");
// 	ft_strncpy(a,b,o);
// 	printf("%s",b);
// 	return (0);
// }
