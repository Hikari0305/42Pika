/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:50:35 by hyoshida          #+#    #+#             */
/*   Updated: 2025/08/27 07:07:09 by hikari           ###   ########.fr       */
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

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
int	ft_strlen(char *str);
void	ft_show_tab(struct s_stock_str *par);

#endif