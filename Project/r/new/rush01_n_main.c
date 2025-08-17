/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_n_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 12:56:33 by kyamanak          #+#    #+#             */
/*   Updated: 2025/08/17 17:33:31 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	check(int (*grid)[4], int *hint);
int	*error_check(int *vals, char *s);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	if (!error_check(hint, argv[1]))
	{
		write (1, "Error\n", 6);
		return (1);
	}
}
