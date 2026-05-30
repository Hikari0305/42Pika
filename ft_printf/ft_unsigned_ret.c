#include "ft_printf.h"

int	ft_unsigned_ret(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_unsigned_ret(n / 10);
	count += ft_write_ret((n % 10) + '0');
	return (count);
}