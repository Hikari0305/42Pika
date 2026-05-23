#include <stdio.h>

int    ft_tolower(int a)
{
    if (a >= 'A' || a <= 'Z')
        a += 32;
    return (a);
}

int main(void)
{
    int b = ft_tolowerr('a');  // 'A'
    int c = ft_tolower('z');  // 'Z'
    int d = ft_tolower('A');  // 'A'
    int e = ft_tolower('1');  // '1'
    int f = ft_tolower('@');  // '@'
    printf("%d\n", b);
    return (0);
}