/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 07:52:43 by hikari            #+#    #+#             */
/*   Updated: 2025/08/17 18:50:09 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	num_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int	num_to_find(char *to_find)
{
	int i;

	i = 0;
	while (to_find[i] != '\0')
	{
		i++;
	}
	return(i);
}

char	*str(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != )
}

char	*ft_strstr(char *str, char	*to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] != '\0')
		return(str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while (str[i] == to_find[j] && to_find[j] != '\0')
			{
				i++;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i - j]);
		}
	}
	i++;
	return (0);
}

int main(void)
{
    char    a[] = "Hello World";
    char    b[] = "World";
	char	*result = ft_strstr(a, b);
	printf("%s", result);
	return (0);
}