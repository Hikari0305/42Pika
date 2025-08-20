/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 06:38:11 by hikari            #+#    #+#             */
/*   Updated: 2025/08/21 08:33:50 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    compare(char *a, char *b)
{
    char	*tmp;
    int     i;

    i = 0;
    while (a[i] != '\0' || b[i] != '\0')
	{
        if (a[i] != b[i])
        {
        }
	    i++;
	}
}


tmp = *a;
*a = *b;
*b = tmp
int main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1; 
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
            swap(argv[i], argv[j]);
			j++;
		}
		i++;
	}
    
    i = 1;
    while (i != argc)
    {
        j = 0;
        while (argv[j][i] != '\0')
        {
            write (1, &argv[i][j], 1);
            j++;
        }
        write (1, "\n", 1);
        i++;
    }
	return (0);
}