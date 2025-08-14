#include <>
void    ft_putchar(char *a, char *b)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while(a[i] != '\0')
    {
        a[i] = b[j];
        i++;
        j++;
    }
}

int main(void)
{
    char    a[] = "Hello";
    char    b[] = "Konnnichiwa";
    ft_putchar(a, b);
    return (0);
}