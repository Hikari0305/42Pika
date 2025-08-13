#include <stdio.h>

char	*ft_change(char *str, int i)
{

	if (i == 1)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
	}
	else
	{
		if (*str >= 'A' && *str <= 'Z')
		{       
            		*str = *str + ('a' - 'A');
		}
	}
	return (0);
}

char	*ft_capitlize(char *str)
{
	char	*tmp;
	int	i;

        tmp = str;
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		i = 1;
		while (*str != '\0')
		{
			if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			{
				ft_change(str,i);
				i = 0;
			}
			else if (*str == ' ' || *str == '\t' || *str == '\n')
			{
				i = 1;
			}
			else
			{
				i = 0;
			}
			str++;
		}
	str = tmp;
	return (str);
	}
}	

int main(void)
{
	char	a[] = "helLo woRld";

	ft_capitlize(a);
	printf("%s",a);
	return (0);
}
