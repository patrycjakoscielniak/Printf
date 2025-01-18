NAME = libftprintf.a
SRC = ft_printf.c ft_printchar.c ft_printstr.c ft_printnbr.c ft_printunnbr.c ft_printhexnbr.c ft_printptr.c
OBJ := $(SRC:%.c=%.o)
CC = cc -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rsc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c ft_printf.h
	$(CC) -I . -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
