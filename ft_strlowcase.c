#include <stdio.h>
#include <string.h>
        
char    *ft_strlowcase(char *str)
{
        char    *tmp;

	if (*str == '\0')
	{
		return (0);
	}
	else
	{
        	tmp = str;
        	while (*str != '\0')
        	{
                	if (*str >= 'A' && *str <= 'Z')
                	{
                        	*str = *str + ('a' - 'A');
                	}
                	str++;
        	}
        	str = tmp;
        	return(str);
	}
}

int main(void)
{
        char    i[]="hIroki";

        ft_strlowcase(i);
        printf("%s",i);
        return (0);
}
