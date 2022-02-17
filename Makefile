NAME = libft
CFLAGS = -Wall -Wextra -Werror -I includes
SRC = src/ft_memset.c \
		src/ft_bzero.c \
		src/ft_memcpy.c \
		src/ft_putstr.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	ar rc $(NAME).a $^
	ranlib $(NAME).a
	cp $(NAME).a test

clean: $(OBJ)
	rm $^

fclean: clean
	rm $(NAME).a