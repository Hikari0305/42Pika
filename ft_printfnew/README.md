*This project has been created as part of the 42 curriculum by hyoshida.*

# ft_printf

## Description

ft_printfはC言語の標準ライブラリ関数である`printf`を再実装するプログラムです。
可変長引数(`va_list`)の扱い方や、各種データ型(整数、文字列、16進数、ポインタなど)の書式設定と言語仕様への理解を深めることを目的としています。

---

## Instructions

```bash
#libftprintf.aをビルド
make

#オブジェクトファイルを削除
make clean

#libftprintf.aとオブジェクトファイルを削除
make fclean

#再ビルド
make re
```

<!--
### 自プロジェクトへの組み込み

```bash
#コンパイル時にliftprintf.aをリンク
cc -Wall -Wextra -Werror test.c -L. -lftprintf -I. -o ft_printf_test && ./ft_printf_test
```

-->

---


## Supported Format Specifiers
`printf`と同様に、以下の指定子に対応しています。

| 指定子 | 出力内容 |
| :---: |:-- |
| `%c` | 単一の文字(Character) |
| `%s` | 文字列(String) |
| `%p` | ポインタのアドレス(Pointer address) |
| `%d` | 10進数の符号付き整数(Signed decimal integer) |
| `%i` | 10進数の符号付き整数(Signed decimal integer) |
| `%u` | 10進数の符号なし整数(Unsigned decimal integer) |
| `%x` | 16進数の符号なし整数、小文字(Unsigned hexadecimal - lowercase) |
| `%X` | 16進数の符号なし整数、大文字(Unsigned hexadecimal - uppercase) |
| `%%` | パーセント記号そのもの(percent sign) |

## Resources
- [C 言語 man ページ (Linux man-pages)](https://man7.org/linux/man-pages/)
- [cppreference.com — C 標準ライブラリ](https://en.cppreference.com/w/c)
- [42 Norm v3](https://github.com/42School/norminette)

### AIの使用について

本課題において、補助ツールとしてGeminiを以下の用途で活用しました。

- コードのセルフチェック
- READMEの構成、記述の改善
