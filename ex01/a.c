/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikari <hikari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 06:36:00 by hikari            #+#    #+#             */
/*   Updated: 2025/08/28 06:36:03 by hikari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/* 区切り文字か？ */
int is_sep(char c, const char *charset) {
    for (int i = 0; charset[i]; i++) {
        if (c == charset[i]) return 1;
    }
    return 0;
}

/* 連続する区切りを読み飛ばす（p を先に進める）*/
const char* skip_seps(const char *p, const char *charset) {
    while (*p && is_sep(*p, charset)) p++;
    return p;
}

/* 次の単語の長さを数える */
int word_len(const char *p, const char *charset) {
    int len = 0;
    while (p[len] && !is_sep(p[len], charset)) len++;
    return len;
}

/* 単語数を数える（先に配列サイズを知るため）*/
int count_words(const char *s, const char *charset) {
    int count = 0;
    const char *p = s;

    while (*p) {
        p = skip_seps(p, charset);
        if (!*p) break;           /* 末尾 */
        count++;                  /* 単語を1つ見つけた */
        p += word_len(p, charset);/* 単語の終わりまで飛ぶ */
    }
    return count;
}

/* 単語をlenぶんmallocしてコピー（終端NUL付き）*/
char *copy_word(const char *p, int len) {
    char *w = (char *)malloc((len + 1) * sizeof(char));
    if (!w) return NULL;
    for (int i = 0; i < len; i++) w[i] = p[i];
    w[len] = '\0';
    return w;
}

/* 本体：NULL終端された文字列配列を返す */
char **ft_split(const char *s, const char *charset) {
    int n = count_words(s, charset);
    char **arr = (char **)malloc((n + 1) * sizeof(char *));
    if (!arr) return NULL;

    const char *p = s;
    int idx = 0;

    while (*p) {
        p = skip_seps(p, charset);
        if (!*p) break;

        int len = word_len(p, charset);
        arr[idx] = copy_word(p, len);
        if (!arr[idx]) {               /* 失敗時は後始末 */
            for (int k = 0; k < idx; k++) free(arr[k]);
            free(arr);
            return NULL;
        }
        idx++;
        p += len;                       /* 次へ */
    }
    arr[idx] = NULL;                    /* 配列終端 */
    return arr;
}