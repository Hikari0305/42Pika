/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 12:53:30 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/16 17:58:20 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int grid[4][4];

// int visible_top(int row)
// {
// 	int max;
// 	int count;
// 	int i;

// 	max = 0;
// 	count = 0;
// 	i = 0;
// 	while(i < 4)
// 	{
// 		if 
// 	}
// }
// int	back_track(int pos)
// {
// 	int row;
// 	int col;
	
// 	if (pos == 16)
// 	{
// 		return (1);
// 	}
// 	row = pos / 4;
// 	col = pos % 4;
// }

void	print_grid(int grid[4][4])
{
	int i;
	int j;
	
	i = 0;
	while (i < 4)
	{
		j = 0;
		while(j < 4)
		{
			printf("%d", grid[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	
}

int	main(void)
{
	int i;
	int j;

	j = 0;
	while(j < 4)
	{
		grid[0][j] = j + 1;
		j++;
	}
	i = 1;
	while(i < 4)
	{
		j = 0;
		while(j < 4)
		{
			grid[i][j] = grid[i - 1][(j + 1) % 4];
			j++;
		}
		i++;
	}
	print_grid(grid);
	return (0);
}