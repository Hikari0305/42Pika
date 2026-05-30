NAME        = libftprintf.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror

SRCS        = ft_printf.c \
              ft_baseten_ret.c \
              ft_character_ret.c \
              ft_hexadlow_ret.c \
              ft_hexadupp_ret.c \
              ft_percent_ret.c \
              ft_pointer_ret.c \
              ft_string_ret.c \
              ft_unsigned_ret.c

OBJS        = $(SRCS:.c=.o)
INCS        = -I.

AR          = ar
ARFLAGS     = rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re