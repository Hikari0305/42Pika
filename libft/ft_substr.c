#include <stdlib.h>

char	*start_fail(void)
{
	char	*array;

	array = (char)malloc(1);
	if (!array)
		return (NULL);
	array[0] = '\0';
	return (array);
}

char	*ft_subtr(const char *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;
	size_t	j;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (start_fail());
	arr = (char *)malloc(sizeof(char) * (len + 1));
	i = start;
	if (!arr)
		return (NULL);
	j = 0;
	while (j < len)
	{
		arr[j] = s[i];
		i++;
		j++;
	}
	arr[j] = '\0';
	return (arr);
}

int	main(void)
{
	char	*a = ft_subtr("Hello World", 3, 5);
	free(a);
	return(0);
}
