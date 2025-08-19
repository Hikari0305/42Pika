/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 18:04:28 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/19 18:13:10 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if (nb == 0 && power == 0)
        return (1);
    return (nb * ft_recursive_power(nb, power - 1));
}

int main(void)
{
   printf("%d", ft_recursive_power(2,2));
   return (0); 
}