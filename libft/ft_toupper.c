#include <stdio.h>

int    ft_toupper(int a)
{
    if (a >= 'a' && a <= 'z')
        a -= 32;
    return (a);
}

int main(void)
{
    int b = ft_toupper('a');  // 'A'
    int c = ft_toupper('z');  // 'Z'
    int d = ft_toupper('A');  // 'A'
    int e = ft_toupper('1');  // '1'
    int f = ft_toupper('@');  // '@'
    printf("%d\n", b);
    return (0);
}