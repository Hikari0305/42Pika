#include "ft_printf.h"

int	ft_write_ret(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_check(char c, va_list *args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_character_ret(va_arg(*args, int));
	else if (c == 's')
		count += ft_string_ret(va_arg(*args, char *));
	else if (c == 'd' || c == 'i')
		count += ft_baseten_ret(va_arg(*args, int));
	else if (c == 'p')
		count += ft_pointer_ret(va_arg(*args, unsigned long long));
	else if (c == 'u')
		count += ft_unsigned_ret(va_arg(*args, unsigned int));
	else if (c == 'x')
		count += ft_hexadlow_ret(va_arg(*args, unsigned int));
	else if (c == 'X')
		count += ft_hexadupp_ret(va_arg(*args, unsigned int));
	else if (c == '%')
		count += ft_percent_ret();
	return (count);
}

int ft_printf(const char *format, ...)
{
    va_list	args;
	int	count;
	int	i;

	if (format == NULL)
	return (-1);
	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_check(format[i], &args);
			i++;
		}
		else
		{
			count += ft_write_ret(format[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
