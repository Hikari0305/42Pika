/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:27:20 by hikari            #+#    #+#             */
/*   Updated: 2026/05/24 09:55:45 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int main(void)
// {
//     // void* a;
//     char b[9];

//     ft_bzero(b, sizeof(b));
// 	printf("%s\n", b);
// 	bzero(b, sizeof(b));
//     printf("%s\n", b);
//     return(0);
// }
