/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 08:47:27 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/29 08:53:16 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	my_printf;
	int	original;

	my_printf = ft_printf("Hello %s! Character is %c.\n", "42Tokyo", 'A');
	original = printf("Hello %s! Character is %c.\n", "42Tokyo", 'A');

	my_printf = ft_printf("%s\n", (char *)NULL);
	original = printf("%s\n", (char *)NULL);
	return (0);
}
