NAME = libft.a
FLAGS = -Wall -Werror -Wextra
CC = gcc
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c
SRC_BONUS = 
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(OBJ) $(SRC_BONUS:.c=.o)
HDRS = libft.h

$(NAME) : $(OBJ) $(HDRS)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ_BONUS) $(HDRS)
	ar rcs $(NAME) $(OBJ_BONUS)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJ) $(SRC_BONUS:.c=.o)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean focus re