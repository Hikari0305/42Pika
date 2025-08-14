#include <unistd.h>

void    f(char a)
{
    while(a <= 'z')
    {
        write(1, &a, 1);
        a++;
    }
}

int main(void)
{
    char    a;
    a = 'a';
    f(a);
    return (0);
}