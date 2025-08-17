/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 11:13:07 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/17 14:32:11 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int top(int (*grid)[4], int *hint);
int bottom(int (*grid)[4], int *hint);
int left(int (*grid)[4], int *hint);
int right(int (*grid)[4], int *hint);
int	*error_check(int *vals, char *s);
int check(int (*grid)[4], int *hint)
{

    int ok;

    ok = 0;
    ok = top(grid, hint) + bottom(grid, hint) + left(grid, hint) + right(grid, hint);
    if (ok == 16)
    {
        return (1);
    }
    return(0);
}

int	main(int argc, char **argv)
{
    int grid[4][4]= {{4,3,2,1}, {3,2,1,4}, {2,1,4,3}, {1,4,3,2}};
	// int	clues[4][N];
	int	vals[16];
	int	i;

	if (argc != 2)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	if (!error_check(vals, argv[1]))
	{
		write (1, "Error\n", 6);
		return (1);
	}
	i = 0;
	
	while (i != 16)
	{
		char c;
	
			c = vals[i] + '0';
			write(1,&c,1);
	i++;
	}
    
    int result = check(grid, vals);
    printf("\n%d",result);
    return(0);
	// int result = check(grid, vals);
	// printf("\n%d", result);
	// if (input_clues(grid, clues, 0, 0))
	// {
	// 	write (1, "Error\n", 6);
	// 	return (1);
	// }
}


