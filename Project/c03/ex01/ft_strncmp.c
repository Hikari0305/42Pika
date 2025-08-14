/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 06:22:58 by hikari            #+#    #+#             */
/*   Updated: 2025/08/14 07:44:35 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int c)
{
	unsigned int i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < c)
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
	int		n = 10;
	int	result_1 = ft_strncmp(a,b,n);
	int	result_2 = ft_strncmp(a,c,n);
	printf("%d\n", result_1);
	printf("%d\n", result_2);
	return (0);
}
