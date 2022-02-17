# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stales <stales@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 18:22:12 by stales            #+#    #+#              #
#    Updated: 2022/02/17 20:21:50 by stales           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS			=	ft_memset.c \
					ft_bzero.c \
					ft_memcpy.c \
					ft_putstr.c \
					ft_memccpy.c \
					ft_strlen.c \
					ft_strcpy.c \
					ft_putchar.c \
					ft_atoi.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_isascii.c \
					ft_isalnum.c \
					ft_isalpha.c \
					ft_tolower.c \
					ft_toupper.c \
					ft_strchr.c \
					ft_isblank.c
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