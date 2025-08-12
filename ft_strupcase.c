#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	char	a[];
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			strcpy(a, str - ('a' - 'A'));
		}
		str++;
	}
	*str = '\0';
	return(a);
}

int main(void)
{
	char	i[]="Hello";

	r = ft_strupcase(i);
	printf("%s",i);
	return (0);
}
