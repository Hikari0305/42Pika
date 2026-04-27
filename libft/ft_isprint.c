#include <stdio.h>

int ft_isprint(char c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}

int main(void)
{
    char c = '8';

    printf("%d\n", ft_isprint(c));
    return 0;
}