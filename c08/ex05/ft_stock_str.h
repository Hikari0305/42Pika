/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:50:35 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/26 17:51:42 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK
# define FT_STOCK

typedef struct s_stock_str
{
int size;
char *str;
char *copy;
} t_stock_str;

#endif