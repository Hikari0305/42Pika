# include <stdio.h>

int	count(int n)
{
	int		len;
	long	nb;

	nb = n;
	len = 0;
	if (nb < 0)
		len++;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*str;

	len = count(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	str[len] = '\0';
	len--;
	while (len != 0)
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (str);
}

int	main(void)
{
	ft_itoa(42);
}