/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 10:20:21 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/23 14:47:47 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

int	 main(void)
{
	int *a;
	int len = ft_ultimate_range(&a ,1, 5);
	printf("%d",len);
	free (a);
	return (0);
}