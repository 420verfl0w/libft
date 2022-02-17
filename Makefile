# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stales <stales@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 17:33:48 by stales            #+#    #+#              #
#    Updated: 2022/02/17 17:33:51 by stales           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
CFLAGS = -Wall -Wextra -Werror -I .
SRC = ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_putstr.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):	$(OBJ)
	ar rcs $(NAME).a $^
	ranlib $(NAME).a

clean:	$(OBJ)
	rm $^

fclean:	clean
	rm $(NAME).a

re:	fclean $(NAME)

.PHONY:	all clean fclean re