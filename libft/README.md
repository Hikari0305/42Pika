*This project has been created as part of the 42 curriculum by hyoshida.*

# Libft

## Description

Libftは、C言語の標準ライブラリ関数を自動で再実装するプロジェクトです。
libcの基本関数（文字列操作、メモリ操作）を'ft_'プレフィックスつきで実装し、更に独自の便利関数と連結リスト操作関数を加えた、汎用Cライブラリ'libft.a'を作成します。

このライブラリは今後の42のカリキュラム全体で再利用可能なツールセットとなります。

---

## Instructions

```bash
#libft.aをビルド
make

#オブジェクトファイルを削除
make clean

#libft.aとオブジェクトファイルを削除
make fclean

#再ビルド
make re
```
<!--
### 自ブロジェクトへの組み込み

```bash
#コンパイル時にlibft.aをリンク
cc -Wall -Wextra -Werror test.c -L. -lft -o test && ./test
```

>**注意:** `strlcpy`, `strlcat`, `bzero`はglibcに含まれないため、Linux環境でシステム実装と比較テストをする場合は`<bsd/string.h>`をインクルードし、`-lbsd`フラグを使用してください。-->

---

## Library Overview

## Part 1 - Libc 関数の再実装

libcの標準関数を'ft_'プレフィックスをつけて再実装したものです。外部関数には一切依存しません。

| 関数 | プロトタイプ | 説明 |
|------|------|------|
| `ft_isalpha` | `int ft_isalpha(int c)` | アルファベット文字かどうかを判定する |
| `ft_isdigit` | `int ft_isdigit(int c)` | 数字かどうかを判定する |
| `ft_isalnum` | `int ft_isalnum(int c)` | 英数字かどうかを判定する |
| `ft_isascii` | `int ft_isascii(int c)` | ASCII文字(0-127)かどうかを判定する|
| `ft_isprint` | `int ft_isprint(int c)` | 印刷可能文字（スペース含む）かどうかを判定する |
| `ft_toupper` | `int ft_toupper(int c)` | 小文字を大文字に変換する |
| `ft_tolower` | `int ft_tolower(int c)` | 大文字を小文字に変換する |

>戻り値: 条件を満たす場合は`1`、満たさない場合は`0`

| `ft_strlen` | `size_t ft_strlen(const char *s)` | ヌル文字を除いた文字列の長さを返す |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t size)` | 安全な文字列連結。必ずヌル終端する |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t size)` | 安全な文字列連結。必ずヌル終端する |
| `ft_strchr` | `char *ft_strchr(const char *s, int c)` | 文字列から文字`c`の最初の出現位置を返す |
| `ft_strrchr` | `char *ft_strrchr(const char *s, int c)` | 文字列から文字`c`の最後の出現位置を返す |
| `ft_stncmp` | `int *ft_strncmp(const char *s1, const char *s2, size_t n)` | 文字列の先頭`n`バイトを比較する |
| `ft_strnstr` | `char *ft_strnstr(const char *big, const char *little, size_t len)` | 文字列`big`の先頭`len`バイト内で`little`を検索する |
| `ft_atoi` | `int ft_atoi(const char *nptr)` | 文字列を整数に変換する |
| `ft_memset` | `void *ft_memset(void *s, int c, size_t n)` | メモリ領域の先頭`n`バイトを文字`c`で埋める |
| `ft_bzero` | `void ft_bzero(void *s, size_t n)` | メモリの先頭`n`バイトを0で埋める |
| `ft_memcpy` | `void *ft_memcpy(void *dest, const void *src, size_t n)` | メモリ領域をコピーする(重複不可) |
| `ft_memmove` | `void *ft_memmove(void *dest, const void *src, size_t n)` | メモリ領域をコピーする(重複対応) |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n)` | メモリブロックの先頭`n`バイト文字`c`を検索する |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | 2つのメモリブロックを先頭nバイト比較する |
| `ft_calloc` | `void *ft_calloc(size_t nmeb ×)` | ヌル文字を除いた文字列の長さを返す |
| `ft_strdup` | `char *ft_strdup(const char *s)` | 文字列を複製した新しい文字列を返す |

---

### Part 2 - 追加関数

libc に含まれないか、異なる形で存在する独自の便利関数です。

| 関数 | プロトタイプ | 説明 |
|------|------------|------|
| `ft_substr` | `char *ft_substr(char const *s, unisgned int start, size_t len)` | 文字列`s`の`start`番目から最大`len`文字の部分文字列を返す |
| `ft_strjoin` | `char *ft_strtrim(char const *s1, char const *s2)` | `s1`と`s2`を連結した新しい文字列を返す |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | `s1`の先頭と末尾から`set`に含まれる文字を取り除いた文字列を返す |
| `ft_split` | `char **ft_split(char const *s, char c)` | 区切り文字と |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | 文字列の各文字に関数`f`を適用した新しい文字列を返す（String Map Index） |
| `ft_striteri` | `char *ft_striteri(char *s, void (*f)(unsigned int ))` | 文字列の各文字に関数`f`を適用した新しい文字列を返す（String Map Index） |
| `ft_itoa` | `char *ft_itoa(int n)` | 整数を文字列に変換する(負数対応) |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | 文字`c`を指定したfdに出力する |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | 文字列`s`を指定したfdに出力する |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | 文字列`s`を指定したfdに出力し、改行を追加する |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | 整数`n`をしていしたfdに出力する |

> fdの例：　`1` = 標準出力、 `2` = 標準エラー出力

---

### Part 3 - 連結リスト

`t_list` 構造体を使った連結リスト操作関数です。`libft.h`には以下の構造体が定義されています。

```c
typedef dtruct s_list
{
    void            *content; //ノードが保持するデータ（任意の型）
    struct s_list   *next; //次のノードへのポインタ（末尾はNULL）
}
```

| 関数 | プロトタイプ | 説明 |
|------|------------|------|
| `ft_lstnew` | `t_list *ft_lstnew(void *content)` | 新しいノードを作成する（`next`はNULL） |
| `ft_plstadd_front` | `void ft_plstadd_front(t_list **lst, t_list *new))` | リストの先頭に新しいノードを追加する |
| `ft_lstsize` | `int ft_lstsize(t_list *lst)` | リストのノード数を返す |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list *lst, void (*del)(void *))` | ストの末尾に新しいノードを追加する |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | ノード1つを削除・解放する(次のノードは解放しない) |
`ft_lstclear` | `void ft_lstclear(t_list *lst, void (*del)(void *))` | リスト全体を削除・解放し、ポインタをNULLに設定する |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *))` | リストの各ノードのコンテンツに関数`f`を適用する |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void (*del)(void *), void *(*f)(void *))` | リストの各ノードのコンテンツに関数`f`を適用する |

---

## Resources

### 参考資料
- [C 言語 man ページ (Linux man-pages)](https://man7.org/linux/man-pages/)
- [cppreference.com — C 標準ライブラリ](https://en.cppreference.com/w/c)
- [42 Norm v3](https://github.com/42School/norminette)

### AIの使用について

本プロジェクトでは、以下の用途に Gemini を使用しました。

- 各関数の動作・仕様の概念理解
- 各関数の記述の改善
- README の構成・記述の改善
