NAME = libftprintf.a
SRC = ft_printf.c
OBJ := $(SRC:%.c=%.o)
CC = cc -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rsc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c libftprintf.h
	$(CC) -I . -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
