/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 12:32:25 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/11 13:58:14 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

// int	main(void)
// {
// 	char	tmp[128];
// 	int		k;

// 	printf("文字を入力してください:");
// 	scanf("%s\n", tmp);

// 	k = ft_strlen(tmp);
// 	printf("%d\n", k);
// 	return (0);
// }
