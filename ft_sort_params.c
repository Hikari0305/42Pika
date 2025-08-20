/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 06:54:39 by hikari            #+#    #+#             */
/*   Updated: 2025/08/21 07:12:50 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char *tmp;
	int i;
	int n;
	
	i = argc - 1;
	n = 0;
	while (i != 0)
	{
		while (argv[i][n] != '\0' || argv[i - 1][n] != '\0')
		{
			if (argv[i][n] != argv[i - 1][n])
			{
				tmp = argv[i];
				argv[i] = argv[i - 1];
				argv[i - 1] = tmp;
			}
			n++;
		}
		i--;
	}
	
}