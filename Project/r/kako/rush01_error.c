/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_kiku.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 12:56:33 by kyamanak          #+#    #+#             */
/*   Updated: 2025/08/17 14:12:38 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define N 4

int check(int *grid, int *hint);

int	*error_check(int *vals, char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] >= '1' && s[j] <= '4')
		{
			if (i >= 16)
				return (0);
			vals[i++] = s[j] - '0';
		}
		else if (s[j] != ' ')
			return (0);
		j++;
	}
	if (i != 16)
		return (0);
	return (vals);
}

// int	*input_clues(int *str)
// {
// 	int = i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
		
// 	}
// }

	// int grid[N][N];        
	// 盤面
	// int clues[4][N];
	// 上下左右のヒント clues[0]top clues[1]bottom clues[2]right clues[3]left
	// int vals[16];          
	// 一時保存用

// int	main(int argc, char **argv)
// {
// 	int	grid[4] = {1234};
// 	// int	clues[4][N];
// 	int	vals[16];
// 	int	i;

// 	if (argc != 2)
// 	{
// 		write (1, "Error\n", 6);
// 		return (1);
// 	}
// 	if (!error_chack(vals, argv[1]))
// 	{
// 		write (1, "Error\n", 6);
// 		return (1);
// 	}
// 	i = 0;
	
// 	while (i != 16)
// 	{
// 		char c;
	
// 			c = vals[i] + '0';
// 			write(1,&c,1);
// 	i++;
// 	}
// 	int result = check(grid, vals);
// 	printf("%d", result);
	// if (input_clues(grid, clues, 0, 0))
	// {
	// 	write (1, "Error\n", 6);
	// 	return (1);
	//
// }
