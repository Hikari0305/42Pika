/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:59:21 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/20 15:06:24 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    char *tmp;
	int i;
	int n;

	i = 1;
	n = 0;
	while (n < argc / 2)
	{
		tmp = argv[i];
		argv[i] = argv[argc - n - 1];
		argv[argc - n - 1] = tmp;
		i++;
		n++;
	}
	i = 1;
	while (i != argc)
	{
		write (1, argv[i], 1);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}