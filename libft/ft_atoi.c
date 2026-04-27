 #include <stdio.h>

int check(char ch)
{
    if (ch == ' ' || ch == '\t', ch == '\n', ch == '\r', ch == '\v', ch == '\f')
        return (1);
    return (0);
}


int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while(check(str[i]) == 1)
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    if (result == -2147483648 || result == 2147483647)
        return (0);
    return (result * sign);
}

int main(void)
{
    printf("%d\n", ft_atoi('-10'));
    return (0);
}