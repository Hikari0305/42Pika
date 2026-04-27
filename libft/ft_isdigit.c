#include <stdio.h>

int ft_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int main(void)
{
    char c = '8';

    printf("%d\n", ft_isdigit(c));
    return 0;
}