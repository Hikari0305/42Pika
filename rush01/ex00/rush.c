/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 17:17:10 by ytaira            #+#    #+#             */
/*   Updated: 2025/08/17 21:49:57 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checker(int god[4][4], int row, int col);

void	rush(int god[4][4], int s)
{
	int	num;
	int	row;
	int	col;

	num = s;
	while (num != 16)
	{
		row = num / 4;
		col = num % 4;
		if (checker(god, row, col) != 0)
		{
			god[row][col] = checker(god, row, col);
			num ++;
		}
		else
		{
			num --;
			god[row][col] = 0;
		}
	}
}
