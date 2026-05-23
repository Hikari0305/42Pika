#include <stdio.h>

void    ft_memchr(const void *arr, int c, size_t n)
{
    size_t i;
    unsigned char *p;
    unsigned char ch;

    i = 0;
    p = (unsigned char*) arr;
    ch = (unsigned char) c;
    while (i < n)
    {
        if (p[i] == c)
            return (p[i]);
        i++;
    }
    return (NULL);
}

int main(void)
{
    char data[] = {'A', 'B', 'C', 'D', 'E'};
    ft_memchr(data, 'C', 5);
    return (0);
}