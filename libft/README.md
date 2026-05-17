*This project has been created as part of the 42 curriculum by hyoshida.*

# Libft

## Description

Libftは、C言語の標準ライブラリ関数を自動で再実装するプロジェクトです。
libcの基本関数（文字列操作、メモリ操作）を'ft_'プレフィックスつきで実装し、更に独自の便利関数と連結リスト操作関数を加えた、汎用Cライブラリ'libft.a'を作成します。

このライブラリは今後の42のカリキュラム全体で再利用可能なツールセットとなります。

---

## Instructions

### コンパイル

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

#### 文字分類
| 関数 | 説明 |
|------|------|
| `ft_isalpha` | アルファベット文字かどうかを判定する |
| `ft_isdigit` | 数字かどうかを判定する |
| `ft_isalnum` | 英数字かどうかを判定する |
| `ft_isascii` | ASCII文字(0-127)かどうかを判定する|
| `ft_isprint` | 印刷可能文字（スペース含む）かどうかを判定する |
| `ft_toupper` | 小文字を大文字に変換する |
| `ft_tolower` | 大文字を小文字に変換する |

>文字分類関数の戻り値: 条件を満たす場合は`1`、満たさない場合は`0`

### 文字列操作
| 関数 | プロトタイプ | 説明 |
|------|------------|------|
| `ft_memset` | `void *ft_memset(void *s, int c, size_t n)` | ヌル文字を除いた文字列の長さを返す |
| `ft_bzero` | `void ft_bzero(void *s, size_t n)` | メモリの先頭`n`バイトを0で埋める |
| `ft_memcpy` | `void *ft_memcpy(void *dest, const void *src, size_t n)` | メモリ領域をコピーする(重複不可) |
| `ft_memmove` | `void *ft_memmove(void *dest, const void *src, size_t n)` | メモリ領域をコピーする(重複対応) |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n)` | メモリブロックの先頭`n`バイト文字`c`を検索する |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | 2つのメモリブロックを先頭nバイト比較する |

#### メモリ確保
| 関数 | プロトタイプ | 説明 |
|------|------------|------|
| `ft_calloc` | `void *ft_calloc(size_t nmeb ×)` | ヌル文字を除いた文字列の長さを返す |
| `ft_strlcpy` | `void ft_bzero(void *s, size_t n)` | メモリの先頭`n`バイトを0で埋める |
