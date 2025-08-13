/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:37:56 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/13 17:42:53 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s1[i] != s2[j])
		{
			return (s1[i] - s2[j]);
		}
		i++;
		j++;
	}
	return (0);
}

int main(void)
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
