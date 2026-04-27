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

char	*ft_strchr(char *haystack, char *needle)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	j = 0;
	length = ft_strlen(needle);
	if (length == 0)
		return (haystack);
	while (haystack[i] != '\0')
	{
		while (needle[j] == haystack[i + j])
		{
			if (j == length - 1)
				return ((char*)haystack + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

int main(void)
{
	char str[] = "banana";
	char *p = ft_strrchr(str, "na");
	printf("%s\n", p);
	return (0);
}
