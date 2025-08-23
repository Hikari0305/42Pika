/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:27:21 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/23 11:11:21 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *arr;
    int i;

	i = 0;
    if (min >= max)
        return (NULL);
    arr = malloc(sizeof(int) * (max - min));
    if (!arr)
        return (NULL);
    while (i < (max - min))
	{
        arr[i] = min + i;
		i++;
	}
    return (arr);
}

int main(void)
{
    int *arr = ft_range(2, 5);
    int i;
    int len = 5 - 2;

    if (!arr)
        return (1);
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return (0);
}