/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_n_bottom.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:45:00 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/17 22:05:37 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ok_num_bottom(int grid[4][4], int i)
{
	int	j;
	int	max;
	int	ok;

	j = 3;
	max = grid[j][i];
	ok = 1;
	while (j >= 0)
	{
		if (grid[j][i] > max)
		{
			ok = ok + 1;
			max = grid[j][i];
		}
		j--;
	}
	return (ok);
}

int	bottom(int grid[4][4], int *hint)
{
	int	i;
	int	hintok;

	i = 0;
	hintok = 0;
	while (i < 4)
	{
		if (ok_num_bottom(grid, i) == hint[i + 4])
		{
			hintok = hintok + 1;
		}
		i++;
	}
	return (hintok);
}
