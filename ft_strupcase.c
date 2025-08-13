#include <stdio.h>
#include <string.h>
        
char    *ft_strupcase(char *str)
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
                        if (*str >= 'a' && *str <= 'z')
                        {
                                *str = *str - ('a' - 'A');
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

        ft_strupcase(i);
        printf("%s",i);
        return (0);
}
