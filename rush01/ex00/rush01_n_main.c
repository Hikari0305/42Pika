/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_n_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 12:56:33 by kyamanak          #+#    #+#             */
/*   Updated: 2025/08/17 22:24:01 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check(int grid[4][4], int *hint);
int		error_check(int *vals, char *s);
void	ft_printf(int p[4][4]);
void	rush(int god[4][4], int s);
void	resumption(int p[4][4], int *hint, int i);
void	change(int change[4][4]);

int	main(int argc, char **argv)
{
	int	god[4][4];
	int	hint[16];
	int	i;

	if (argc != 2 || !error_check(hint, argv[1]))
	{
		write (1, "Error\n", 6);
		return (1);
	}
	i = 0;
	change(god);
	resumption(god, hint, i);
	if (check(god, hint) == 1)
	{
		ft_printf(god);
	}
	else
	{
		write (1, "Error\n", 6);
		return (0);
	}
}
