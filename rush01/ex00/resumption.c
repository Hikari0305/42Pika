/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resumption.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 17:20:00 by ytaira            #+#    #+#             */
/*   Updated: 2025/08/17 22:22:07 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int god[4][4], int s);
int		check(int grid[4][4], int *hint);

void	resumption(int p[4][4], int *hint, int i)
{
	if (check(p, hint) != 1 && i < 600)
	{
		rush (p, 15);
		i++;
		resumption(p, hint, i);
	}
}
