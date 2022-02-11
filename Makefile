NAME = libft
CFLAGS = -Wall -Wextra -Werror -I includes
SRC = src/
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	ar rc $(NAME).a $^
	ranlib $(NAME).a

clean: $(OBJ)
	rm $^