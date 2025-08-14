#include <unistd.h>
void    ft_putchar(int a)
{
    if (a >= 0)
    {
        write(1, "N", 1);
    }
    else
    {
        write(1, "P", 1);
    }
}

int main(void)
{
    int a = -1;
    ft_putchar(a);
    return (0);
}
