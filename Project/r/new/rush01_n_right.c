/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_right.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 15:20:51 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/17 15:38:58 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ok_num_right(int (*grid)[4], int j)
{
	int	i;
	int	max;
	int	ok;

	i = 3;
	max = grid[j][i];
	ok = 1;
	while (i >= 0)
	{
		if (grid[j][i] > max)
		{
			ok = ok + 1;
			max = grid[j][i];
		}
		i--;
	}
	return (ok);
}

int	right(int (*grid)[4], int *hint)
{
	int	j;
	int	hintok;

	j = 0;
	hintok = 0;
	while (j < 4)
	{
		if (ok_num_right(grid, j) == hint[j + 12])
		{
			hintok += 1;
		}
		j++;
	}
	return (hintok);
}
