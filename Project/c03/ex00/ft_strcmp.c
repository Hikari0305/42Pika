/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:37:56 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/14 06:34:53 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	a[] = "Hello";
	char	b[] = "Hello";
	char	c[] = "world";
	int result_1 = ft_strcmp(a, b);
	int result_2 = ft_strcmp(a, c);
	printf("%d", result_1);
	printf("%d", result_2);
	return (0);
}
