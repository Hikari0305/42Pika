NAME = libft.a
FLAGS = -Wall -Werror -Wextra
CC = gcc
SRC = ft_atoi.c ft_putstr_fd.c ft_strlen.c ft_putchar_fd.c
OBJ = $(SRC:.c=.o)
HDRS = libft.h

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
