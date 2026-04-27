#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(ft_strlrn(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}