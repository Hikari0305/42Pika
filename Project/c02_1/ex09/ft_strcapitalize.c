/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:49:44 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/13 15:58:22 by hyoshida         ###   ########.fr       */
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
	else if (*str >= '0' && *str <= '9')
	{
		*i = 0;
	}
	else if (!(*str >= 'A' && *str <= 'z'))
	{
		*i = 1;
	}
	else
	{
		*i = 0;
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
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

//int main(void)
//{
//	char	a[] = "helLo woRld";
//	char	b[] = "hi, how are you? 42words forty-two; fifty+and+one";
//	ft_strcapitalize(a);
//	ft_strcapitalize(b);
//	printf("%s\n",a);
//	printf("%s",b);
//	return (0);
//}
