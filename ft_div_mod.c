/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 06:59:19 by hikari            #+#    #+#             */
/*   Updated: 2025/08/10 07:12:14 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_div_mod(int a,int b,int *div,int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main (void)
{
    int x;
    int y;
    int div;
    int mod;

    x = 20;
    y = 8;
    ft_div_mod(x,y,&div,&mod);
    printf("div = %d, mod = %d\n",div,mod);
    return(0);
}
