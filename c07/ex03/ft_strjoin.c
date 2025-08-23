/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:25:10 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/23 18:14:33 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	len(char **strs, char *sep, int size)
{
	int i;
	int j;
	int k;
	int str_len;
	
	i = 0;
	j = 0;
	str_len = 0;
	while(sep[i] != '\0')
		i++;
	while(j < size)
	{
		k = 0;
		while(strs[j][k] != '\0')
		{
			k++;
		}
		str_len = str_len + k;
		j++;
	}
	return(str_len + i * (size - 1));
}

char	ft_result()

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_len;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if(size == 0)
	{
		result = (char *)malloc(sizeof(char) * (1));
		result[0] = '\0'; 
		return(result);
	}
	total_len = len(strs, sep, size);
	result = (char *)malloc(sizeof(char) * (total_len + 1));
	while(i < size)
	{
		j = 0;
		while(strs[i][j] != '\0')
		{
			result[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		if (i < size - 1)
		{
			while(sep[j] != '\0')
			{
				result[k] = sep[j];
				k++;
				j++;
			}
		}
		i++;
	}
	result[k] = '\0';
	return(result);
}

int	main(void)
{
	char *a[] = {"Hikari", "Yoshida"};
	char b[] = "Hello";
	char *c = ft_strjoin(2, a, b);
	printf("%s", c);
	return (0);
}