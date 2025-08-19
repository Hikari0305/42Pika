/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 07:57:21 by hikari            #+#    #+#             */
/*   Updated: 2025/08/20 08:13:41 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
    int n;

    n = 2;
    if (nb == 0 || nb == 1)
        return (0);
    while (n <= nb -1)
    {
        if (nb % n == 0)
            return (0);
        n++;
    }
    return (1);
}

int main(void)
{
    printf("%d", ft_is_prime(5));
    return (0);
}