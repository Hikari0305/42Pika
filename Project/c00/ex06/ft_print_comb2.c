/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 07:19:39 by hikari            #+#    #+#             */
/*   Updated: 2025/08/09 21:59:41 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printNum(char a, char b, char c,char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '8')
	{
		write(1, "", 1);
	}
	else
	{
		write(1, ", ", 1);
	}
	
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while(i <= 98)
	{
		int j = i + 1;
		while(j <= 99)
        {
			printNum(i / 10 + '0', i % 10 + '0', j / 10 + '0', j % 10 + '0');
            j++;
        }
        i++;
    }
}

int     main()
{
    ft_print_comb2();
    return 0;
} 