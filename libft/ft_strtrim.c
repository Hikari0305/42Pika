/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:46:08 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/17 15:46:17 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	int		start;
	int		end;
	char	*arr;

	if (!set || !s1)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && check_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && check_set(s1[end - 1], set))
		end--;
	arr = (char)malloc(end - start + 1);
	if (!arr)
		return (NULL);
	return (ft_strlcpy(arr, s1 + start, end - start + 1));
}

int	main(void)
{
	char	*a = ft_strtrim("   Hello World ", " ");
	char	*b = ft_strtrim("!!@@Hello World@@!!", "!@");
	char	*c = ft_strtrim("   Hello W orld ", " ");
	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", c);
	return (0);
}
