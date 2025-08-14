/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 10:35:49 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/10 17:35:03 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c);
void	write_row(char f_col, char m_cols, char l_col, int x);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		ft_putchar('\n');
		write(1, "1以上の整数を入力してください", strlen("1以上の整数を入力してください"));
		return ;
	}
	write_row('/', '*', '\\', x);
	while (y-- > 1)
	{
		if (y == 1)
			write_row('\\', '*', '/', x);
		else
			write_row('*', ' ', '*', x);
	}
}

void	write_row(char f_col, char m_cols, char l_col, int x)
{
	ft_putchar(f_col);
	if (x != 1)
	{
		while (x-- > 2)
		{
			ft_putchar (m_cols);
		}
		ft_putchar (l_col);
	}
	ft_putchar('\n');
}
