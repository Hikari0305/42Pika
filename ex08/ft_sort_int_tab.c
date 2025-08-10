/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 07:42:20 by hikari            #+#    #+#             */
/*   Updated: 2025/08/11 08:34:44 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while(i < size - 1)
	{
		j = size - 1;
		while(j > i)
		{
			if(tab[j - 1] > tab[j])
			{
				tmp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = tmp;
			}
			j--;
		}
		i++;
	}
}

int main(void)
{
	int a[5];
	int i;

	a[0] = 5;
	a[1] = 2;
	a[2] = 8;
	a[3] = 4;
	a[4] = 6;
	ft_sort_int_tab(&a[0], 5);
	i = 0;
	while(i < 5)
	{
		printf("a[%d] = %d\n", i, a[i]);
		i++;
	}
	return(0);
}
