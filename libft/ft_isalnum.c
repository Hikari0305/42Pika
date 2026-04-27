#include <stdio.h>

int ft_isalnum(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >='0' && c <= '9'))
        return (1);
    return (0);
}

int main(void)
{
    char c = '8';

    printf("%d\n", ft_isalnum(c));
    return 0;
}