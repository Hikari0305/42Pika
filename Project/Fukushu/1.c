void    ft_putchar(char a)
{
    write (1, &a, 1);
}

int main(void)
{
    char    a = 'A';
    ft_putchar(a);
    return (0);
}