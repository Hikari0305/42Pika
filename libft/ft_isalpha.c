#include <stdio.h>

int ft_isalpha(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}

int main(void)
{
    char c = '8';

    printf("%d\n", ft_isalpha(c));
    return 0;
}