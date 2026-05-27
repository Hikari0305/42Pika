/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 14:56:57 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/24 09:55:07 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size > SIZE_MAX / nmemb)
		return (NULL);
	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return (array);
}

// int	main(void)
// {
// 	int	*arr;
// 	size_t	i = 0;
// 	size_t	count = 5;

// 	arr = (int *)ft_calloc(count, sizeof(int));
// 	if (!arr)
// 	{
// 		printf("確保失敗\n");
// 		return (1);
// 	}
// 	while (i < count)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// 	free(arr);
// 	return (0);
// }
