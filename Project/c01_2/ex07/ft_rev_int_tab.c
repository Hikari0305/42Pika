/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 14:40:50 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/11 10:52:10 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// int main(void)
// {
// 	int	a[4];
// 	int i;

// 	a[0] = 1;
// 	a[1] = 2;
// 	a[2] = 3;
// 	a[3] = 4;
// 	ft_rev_int_tab(a, 4);
// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("a[%d] = %d\n", i, a[i]);
// 		i++;
// 	}

// 	return (0);
// }
