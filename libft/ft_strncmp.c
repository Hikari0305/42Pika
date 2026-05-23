#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while ( i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main(void)
{
	int a = ft_strncmp("apple", "banana", 5);
	printf("%d\n", a);
	return (0);
}