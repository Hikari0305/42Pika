/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshida <hikari.y.0305@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 10:05:12 by hyoshida          #+#    #+#             */
/*   Updated: 2026/06/14 10:55:47 by hyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_and_stash(int fd, char *backup)
{
	char	*buf;
	int		read_bytes;
	char	*tmp;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	read_bytes = 1;
	//backupのなかにまだ'\n'がなくて、かつファイルがまだ終わっていない(read_bytes > 0)の間
	while (ft_strchr(backup, '\n') == NULL && read_bytes > 0)
	{
		read_bytes = read(fd, buf, BUFFER_SIZE);
		if (read_bytes == -1) //読み込みエラーが起きたら
		{
			free(buf);
			free(backup); //重要！！
			return (NULL);
		}
		buf[read_bytes] = '\0';
		//メモリリーク対策（つなげる前のbackupがのこらないように
		tmp = backup;
		backup = ft_strjoin(backup, buf);//backupとbufを合体する
		free(tmp);
	}
	free(buf);
	return (backup);
}

char	*extract_line(char *backup)
{
	char	*line;
	int		i;

	if (!backup || backup[0] == '\0')
		return (NULL);
	i = 0;
	while (backup[i] != '\0' && backup[i] != '\n')
		i++;
	// backup[i] が '\n' だった場合は \n の分 (+1) と \0 の分 (+1) で合計 +2 確保する
	// backup[i] が '\0' だった場合は \0 の分 (+1) だけ確保する
	if (backup[i] == '\n')
		line = malloc(sizeof(char) * (i + 2));
	else
		line = malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (backup[i] != '\0' && backup[i] != '\n') //もし\nでおわってたら\nもちゃんといれてあげる
	{
		line[i] = backup[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*update_backup(char *backup)
{
	char	*next_backup;
	int		i;
	int		j;

	i = 0;
	while (backup[i] != '\0' && backup[i] != '\n')
		i++;
	if (backup[i] == '\0')//もし\0に達していたら、これ以上後ろには何も残っていないということ
	{
		free(backup);
		return (NULL);
	}
	// 必要なサイズは：(全体の長さ - \nまでの長さ) + \0 の分 (+1)
	next_backup = malloc(sizeof(char) * (ft_strlen(backup) - i));
	if (!next_backup)
	{
		free(backup);
		return (NULL);
	}
	i++;//\nの次の文字から後ろをコピーする、\nの次へ進める
	j = 0;
	while (backup[i] != '\0')
	{
		next_backup[j] = backup[i];
		i++;
		j++;
	}
	next_backup[j] = '\0';
	free(backup);
	return (next_backup);
}

char	*get_next_line(int fd)
{
	static char *backup;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	backup = read_and_stash(fd, backup);
	if (!backup)
		return (NULL);
	line = extract_line(backup);
	backup = update_backup(backup);
	return (line);
}
