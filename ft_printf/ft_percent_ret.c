#include "ft_printf.h"

int	ft_percent_ret(void)
{
	int	count;

	count = 0;
	count += ft_write_ret('%');
	return (count);
}
