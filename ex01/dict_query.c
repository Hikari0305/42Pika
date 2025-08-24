/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_query.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 11:40:18 by kyamanak          #+#    #+#             */
/*   Updated: 2025/08/24 08:33:06 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	free_dict(t_dict *dict)
{
	int	i;

	if (!dict || !dict->items)
		return ;
	i = 0;
	while (i < dict->size)
	{
		free(dict->items[i].key);
		free(dict->items[i].value);
		i++;
	}
	free(dict->items);
	dict->items = NULL;
	dict->size = 0;
}

char	*dict_find(t_dict *dict, char *key)
{
	int	i;

	i = 0;
	while (i < dict->size)
	{
		if (ft_strcmp(dict->items[i].key, key) == 0)
			return (dict->items[i].value);
		i++;
	}
	return (NULL);
}