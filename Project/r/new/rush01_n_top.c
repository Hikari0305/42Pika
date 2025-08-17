/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 15:14:26 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/17 15:41:38 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ok_num_top(int (*grid)[4], int i)
{
	int	j;
	int	max;
	int	ok;

	j = 0;
	max = grid[j][i];
	ok = 1;
	while (j < 4)
	{
		if (grid[j][i] > max)
		{
			ok = ok + 1;
			max = grid[j][i];
		}
		j++;
	}
	return (ok);
}

int	top(int (*grid)[4], int *hint)
{
	int	i;
	int	hintok;

	i = 0;
	hintok = 0;
	while (i < 4)
	{
		if (ok_num_top(grid, i) == hint[i])
		{
			hintok = hintok + 1;
		}
		i++;
	}
	return (hintok);
}
