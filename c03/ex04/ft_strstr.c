/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 07:52:43 by hikari            #+#    #+#             */
/*   Updated: 2025/08/14 08:23:46 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char  *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (to_find[j] != '\0')
	{
		j++;
	}
	while (str[k] != '\0' && k < i - j + 1)
	{
		
	}
}

int main(void)
{
    char    a[] = "Hello World";
    char    b[] = "World";
}