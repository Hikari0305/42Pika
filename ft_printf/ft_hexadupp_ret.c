#include "ft_printf.h"

int	ft_hexadupp_ret(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_hexadupp_ret(n / 16);
	count += ft_write_ret("0123456789ABCDEF"[n % 16]);
	return (count);
}
