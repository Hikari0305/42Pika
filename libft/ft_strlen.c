/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 21:04:15 by hikari            #+#    #+#             */
/*   Updated: 2025/10/30 21:19:17 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strlen(char *a)
{
    int i;

    i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    return(i);
}

int main(void)
{
    char    a[] = "Hello";
    printf("%d",ft_strlen(a));
    return(0);
}