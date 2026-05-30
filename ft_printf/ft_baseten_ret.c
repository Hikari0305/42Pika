#include "ft_printf.h"

int	ft_baseten_ret(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		count += ft_write_ret('-');
		n = -n;
	}
	if (n >= 10)
		count += ft_baseten_ret(n / 10);
	count += ft_write_ret((n % 10) + '0');
	return (count);
}