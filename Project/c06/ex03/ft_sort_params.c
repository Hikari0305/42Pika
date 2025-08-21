/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 06:54:39 by hikari            #+#    #+#             */
/*   Updated: 2025/08/21 16:06:12 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	compare(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] != b[i])
		{
			return (a[i] - b[i]);
		}
		i++;
	}
	return (a[i] - b[i]);
}

void	swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_write(char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i != argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write (1, &argv[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (compare(argv[i], argv[j]) > 0)
				swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
	ft_write(argv, argc);
	return (0);
}
