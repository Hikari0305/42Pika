/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:44:08 by hyoshida          #+#    #+#             */
/*   Updated: 2026/05/24 15:14:23 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

void	my_test_func(unsigned int i, char *c)
{
	if (i % 2 != 0 && (*c >= 'a' && *c <= 'z'))
		*c = *c - 32;
}
int	main(void)
{
	char	c[] = "hello my name is hikari";
	ft_striteri(c, my_test_func);
	printf("変更後: %s\n", c);
	return (0);
}
