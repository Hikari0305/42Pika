/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 05:28:19 by hikari            #+#    #+#             */
/*   Updated: 2025/08/28 05:34:54 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

static int    is_sep(char c, char charset)
{
    int    i;

    i = 0;
    while (charset[i])
    {
        if (c == charset[i])
            return (1);
        i++;
    }
    return (0);
}

static int    count_words(charstr, char *charset)
{
    int    i;
    int    count;
    int    in_word;

    i = 0;
    count = 0;
    in_word = 0;
    while (str[i])
    {
        if (is_sep(str[i], charset))
            in_word = 0;
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        i++;
    }
    return (count);
}

static char    malloc_word(charstr, char *charset)
{
    int        len;
    char    word;
    int        i;

    len = 0;
    while (str[len] && !is_sep(str[len], charset))
        len++;
    word = (char)malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    i = 0;
    while (i < len)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char    ft_split(char str, charcharset)
{
    int        i;
    int        word_index;
    char    result;

    result = (char )malloc(sizeof(char ) (count_words(str, charset) + 1));
    if (!result)
        return (NULL);
    i = 0;
    word_index = 0;
    while (str)
    {
        if (!is_sep(str, charset))
        {
            result[word_index] = malloc_word(str, charset);
            word_index++;
            while (str && !is_sep(str, charset))
                str++;
        }
        else
            str++;
    }
    result[word_index] = 0;
    return (result);
}

#include <stdio.h>

char        ft_split(char str, char charset);

int    main(void)
{
    char    **arr;
    int        i;

    arr = ft_split("Hello,42Tokyo!C;Piscine", ",;! ");
    i = 0;
    while (arr[i])
    {
        printf("[%s]\n", arr[i]);
        free(arr[i]);
        i++;
    }
    free(arr);
    return (0);
}

