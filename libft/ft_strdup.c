#include <stdio.h>

char    *ft_strdup(const char *str)
{
    char    *arr;
    int     i;

    i = 0;
    while(str[i] != '\0')
        i++;
    arr = (char *)malloc(sizeof(char) * (i + 1));
    if (!arr)
        return (NULL);
    i = 0;
    while(str[i] != '\0')
    {
        arr[i] = str[i];
        i++;
    }
    arr[i] = '\0';
    return (arr);
}

int main(void)
{
    char    *a = ft_strdup("Hello");
    printf("%s\n", a);
    free(a);
    return (0);
}