#include <stdio.h>

int ft_strlen(char *a)
{
    int i;

    i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    return(i);
}

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = ft_strlen;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char*)s + i);
		i--;
	}
	return (NULL);
}

int main(void)
{
	char str[] = "banana";
	char *p = ft_strrchr(str, 'a');
	printf("%s\n", p);
	return (0);
}