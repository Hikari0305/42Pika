/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 21:27:03 by hikari            #+#    #+#             */
/*   Updated: 2025/08/24 08:50:55 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static char *append_buffer(char *acc, int total, char *buf, int n)
{
    char *tmp;
    int i;

    tmp = (char *)malloc(total + n);
    if (!(tmp))
        return (NULL);
    i = 0;
    while (i < total)
    {
        tmp[i] = acc[i];
        i++;
    }
    i = 0;
    while (i < n)
    {
        tmp[total + i] = buf[i];
        i++;
    }
    free(acc);
    return (tmp);
}

static int append_chunk(char **pacc, int *ptotal, char *buf, int n)
{
	char *tmp;

	tmp = append_buffer(*pacc, *ptotal, buf, n);
	if (!tmp)
		return (0);
	*pacc = tmp;
	*ptotal += n;
	return (1);
}

static char	*read_all_text(const char *path, int *out_len)
{
	int		fd;
	int		n;
	int		total;
	char	buf[4096];
	char	*acc;
	char	z;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (NULL);
	acc = NULL;
	total = 0;
	while ((n = read(fd, buf, sizeof(buf))) > 0)
	{
		if (!append_chunk(&acc, &total, buf, n))
			return (close(fd), NULL);
	}
	if (n < 0)
		return (free(acc), close(fd), NULL);
	close(fd);
	if (total == 0)
		return (NULL);
	z = '\0';
	acc = append_buffer(acc, total, &z, 1);
	if (!acc)
		return (NULL);
	*out_len = total;            // ← '\0'は含めない実データ長
	return (acc);
}


static int	count_lines(char *s, int n)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i < n)
	{
		if (s[i] == '\n')
			c++;
		i++;
	}
	return (c + 1);
}
