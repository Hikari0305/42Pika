CC	:= cc
CFLAGS := -Wall -Wextra -Werror

SRC	:= main.c ft_putchar.c rush03.c
OBJ	:= $(SRC:.c=.o)

NAME	:= main

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

Clean:
	rm -r $(OBJ)

fclean: clean
	rm -r $(NAME)

re: fclean all

.PHONY: all clean fclean re
