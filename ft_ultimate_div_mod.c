/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 07:13:37 by hikari            #+#    #+#             */
/*   Updated: 2025/08/10 07:40:28 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a,int *b)
{
	int quotient;
	int remainder;

	quotient = *a / *b;
	remainder = *a % *b;
	*a = quotient;
	*b = remainder;
	
}

int main (void)
{
	int x;
	int y;

	x = 28;
	y = 9;
	ft_ultimate_div_mod(&x,&y);
	printf("quotient = %d, remainder = %d\n", x,y);
	return(0);
}