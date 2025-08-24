/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parse_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 07:10:14 by hikari            #+#    #+#             */
/*   Updated: 2025/08/24 07:11:28 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static void	free_pairs(t_pair *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(arr[i].key);
		free(arr[i].value);
		i++;
	}
	free(arr);
}

static char	*dup_slice(const char *s, int start, int end)
{
	int		len;
	char	*out;
	int		i;

	len = end - start;
	out = (char *)malloc((size_t)len + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (i < len)
	{
		out[i] = s[start + i];
		i++;
	}
	out[len] = '\0';
	return (out);
}

static int	process_nonempty_line(char *line, t_pair *slot)
{
	if (!parse_line(line, slot))
		return (0);
	return (1);
}

static int	handle_segment(char *blob, int start, int end, t_pair *arr, int *idx)
{
	int		len;
	char	*one;

	len = end - start;
	one = dup_slice(blob, start, end);
	if (!one)
		return (0);
	if (len > 0)
	{
		if (!process_nonempty_line(one, &arr[*idx]))
			return (free(one), 0);
		(*idx)++;
	}
	free(one);
	return (1);
}