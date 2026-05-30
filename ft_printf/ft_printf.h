#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_check(char c, va_list *args);
int	ft_write_ret(char c);
int	ft_baseten_ret(int n);
int ft_character_ret(int c);
int	ft_hexadlow_ret(unsigned int n);
int	ft_hexadupp_ret(unsigned int n);
int	ft_percent_ret(void);
int	ft_pointer_ret(unsigned long ptr);
int	ft_string_ret(char *s);
int	ft_unsigned_ret(unsigned int n);

#endif