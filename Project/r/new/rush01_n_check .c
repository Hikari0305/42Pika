/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_n_check .c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 11:13:07 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/17 17:38:56 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	top(int (*grid)[4], int *hint);
int	bottom(int (*grid)[4], int *hint);
int	left(int (*grid)[4], int *hint);
int	right(int (*grid)[4], int *hint);

int	check(int (*grid)[4], int *hint)
{
	int	ok;

	ok = 0;
	ok = top(grid, hint) + bottom(grid, hint)
		+ left(grid, hint) + right(grid, hint);
	if (ok == 16)
		return (1);
	return (0);
}
