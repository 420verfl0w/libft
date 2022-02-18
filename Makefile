# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stales <stales@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 18:22:12 by stales            #+#    #+#              #
#    Updated: 2022/02/18 00:45:49 by stales           ###   ########.fr        #
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
					ft_isblank.c \
					ft_strcmp.c \
					ft_strncmp.c \
					ft_strstr.c \
					ft_strcat.c \
					ft_strncpy.c \
					ft_memchr.c \
					ft_strdup.c \
					ft_memmove.c \
					ft_strncat.c \
					ft_strnstr.c \
					ft_calloc.c \
					ft_memcmp.c \
					ft_strlcpy.c \
					ft_strlcat.c
OBJS			= $(SRCS:.c=.o)
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

%.o: %.c
	@echo "\033[38;5;82m[\033[94m+\033[38;5;82m] Creation of the object \033[38;5;226m$< \033[32;5;85m -> \033[38;5;226m $@ \033[00m"
	@$(CC) $(CFLAGS) -o $@ -c $<
	
$(NAME):		$(OBJS)
				@echo "\033[38;5;82m[\033[94m+\033[38;5;82m] Creation of \033[34mlibft.a\033[00m"
				@ar rcs $(NAME) $(OBJS)

clean:
				rm -f $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re
