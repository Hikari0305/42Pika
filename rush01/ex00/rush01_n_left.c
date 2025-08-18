/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_n_left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 15:33:59 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/17 22:06:08 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ok_num_left(int grid[4][4], int j)
{
	int	i;
	int	max;
	int	ok;

	i = 0;
	max = grid[j][i];
	ok = 1;
	while (i < 4)
	{
		if (grid[j][i] > max)
		{
			ok = ok + 1;
			max = grid[j][i];
		}
		i++;
	}
	return (ok);
}

int	left(int grid[4][4], int *hint)
{
	int	j;
	int	hintok;

	j = 0;
	hintok = 0;
	while (j < 4)
	{
		if (ok_num_left(grid, j) == hint[j + 8])
		{
			hintok = hintok + 1;
		}
		j++;
	}
	return (hintok);
}
