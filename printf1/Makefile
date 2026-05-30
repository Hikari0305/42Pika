NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra
CC = gcc
SRC = ft_printf.c ft_printf_utils.c

OBJ = $(SRC:.c=.o)
HDRS = ft_printf.h

LIBFT_DIR = ./libftprintf
LIBFT = $(LIBFT_DIR)/libft.a
$(NAME) : $(OBJ) $(HDRS)
	ar rcs $(NAME) $(OBJ)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

bonus: $(NAME)

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
