#include "get_next_line.h" // これで get_next_line が使えるようになる
#include <stdio.h>         // printf を使うため
#include <stdlib.h>        // free を使うため（これでエラーが1つ消える）
#include <unistd.h>        // close を使うため（これでエラーが1つ消える）
#include <fcntl.h>         // open を使うため

int main(void)
{
    int     fd;
    char    *line;
    int     i;

    // 1. test.txt を読み込み専用(O_RDONLY)で開く
    fd = open("test.txt", O_RDONLY);
    if (fd == -1)
    {
        printf("ファイルが開けませんでした！\n");
        return (1);
    }

    // 2. ループで get_next_line を何度も呼び出す
    i = 1;
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("[%d行目]: %s", i, line);
        free(line); 
        i++;
    }

    // 3. 使い終わった fd を閉じる
    close(fd);
    return (0);
}
