#include <stdio.h>

int ft_isascii(char c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

int main(void)
{
    char c = '8';

    printf("%d\n", ft_isascii(c));
    return 0;
}