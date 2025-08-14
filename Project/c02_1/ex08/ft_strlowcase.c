/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:48:16 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/13 16:24:35 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	char	*tmp;
	int		i;

	tmp = str;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
	str = tmp;
	return (str);
}

//int main(void)
//{
//        char    i[]="konNIchIwA";
//        ft_strlowcase(i);
//        printf("%s",i);
//        return (0);
//}
