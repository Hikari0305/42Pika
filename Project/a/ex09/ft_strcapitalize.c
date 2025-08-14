/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:49:44 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/13 11:46:27 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_change(char *str, int **i)
{
	if (**i == 1)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
	}
	else
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + ('a' - 'A');
		}
	}
	return (0);
}

char	*ft_if(char *str, int *i)
{
	if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
	{
		ft_change(str, &i);
		*i = 0;
	}
	else if (*str == ' ' || *str == '\t' || *str == '\n')
	{
		*i = 1;
	}
	else
	{
		*i = 0;
	}
	return (0);
}

char	*ft_capitlize(char *str)
{
	char	*tmp;
	int		i;

	tmp = str;
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		i = 1;
		while (*str != '\0')
		{
			ft_if(str, &i);
			str++;
		}
		str = tmp;
		return (str);
	}
}

// int main(void)
// {
// 	char	a[] = "helLo woRld";
// 	ft_capitlize(a);
// 	printf("%s",a);
// 	return (0);
// }
