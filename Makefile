NAME = libftprintf.a
INC = libftprintf.h

CFILES = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c\
	 ft_lowhex.c ft_putptr.c ft_putunit.c ft_uphex.c

OFILES = $(CFILES:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

%.o: %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OFILES)
	echo "Creating libftprintf.a"
	ar rcs $(NAME) $(OFILES)

clean:
	echo "Running clean"
	rm -f $(OFILES)

fclean: clean
	echo "Running fclean"
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
