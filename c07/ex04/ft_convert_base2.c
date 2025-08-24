/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:44:58 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/24 13:22:56 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_atoi_base(char *str, char *base);
int	base_check(char *base);

char    *ft_itoa_base(int a, int base_len)
{
    char    *c;

    if (base_len )
    
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int a;
	int	base_from_len;
	int	base_to_len;
    char    *c;
    
    a = ft_atoi_base(nbr, base_from);
	base_from_len = base_check(base_from);
	base_to_len = base_check(base_to);
	if (base_from_len == 0 || base_to_len == 0)
		return (NULL);
    c = (char *)malloc(sizeof(char) * (base_to_len));
    ft_itoa_base(a, base_to_len)
    if (a < 0)
	{
        c = "-";
        a = -a;
	}
    if (a >= base_to_len)
		ft_convert_base(a / base_to_len, base_to);
	c = base[a % base_to_len];
    return (c);
}