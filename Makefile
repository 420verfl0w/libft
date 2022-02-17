# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stales <stales@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 17:33:48 by stales            #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2022/02/17 18:17:51 by stales           ###   ########.fr        #
=======
#    Updated: 2022/02/17 18:14:12 by stales           ###   ########.fr        #
>>>>>>> 9aac7fa9039132d35e932e3ead47c9ed12ed2c04
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_memset.c ft_bzero.c ft_memcpy.c ft_putstr.c ft_memccpy.c ft_strlen.c \
<<<<<<< HEAD
					ft_strcpy.c ft_putchar.c
=======
					ft_strcpy.c
>>>>>>> 9aac7fa9039132d35e932e3ead47c9ed12ed2c04
OBJS			= $(SRCS:.c=.o)
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				rm -f $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re