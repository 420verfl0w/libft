# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pix <pix@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 18:22:12 by stales            #+#    #+#              #
#    Updated: 2022/02/18 03:23:57 by pix              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#  Bash Color

green			= \033[38;5;82m
blue			= \033[38;5;75m
yellow			= \033[38;5;226m

blinking		= \033[5m
reset			= \033[0m

# **************************************************************************** #

# **************************************************************************** #
# config

SRCS			=	ft_atoi.c \
					ft_bzero.c \
					ft_calloc.c \
					ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isblank.c \
					ft_iscntrl.c \
					ft_isdigit.c \
					ft_isgraph.c \
					ft_islower.c \
					ft_isprint.c \
					ft_isspace.c \
					ft_isupper.c \
					ft_memccpy.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c \
					ft_putchar.c \
					ft_putnbr.c \
					ft_putstr.c \
					ft_strcat.c \
					ft_strchr.c \
					ft_strcmp.c \
					ft_strcpy.c \
					ft_strdup.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strlen.c \
					ft_strncat.c \
					ft_strncmp.c \
					ft_strncpy.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_strstr.c \
					ft_tolower.c \
					ft_toupper.c
OBJS			= $(SRCS:.c=.o)
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

# **************************************************************************** #

# **************************************************************************** #
# Building rules

all:			$(NAME)

%.o: %.c
	@printf "$(green)[$(blue)+$(green)] Creation of the object $(yellow)$< $(blinking)$(green) -> $(reset)$(yellow) $@ $(reset)\n"
	@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):		$(OBJS)
				@printf "$(green)[$(blue)+$(green)] Creation of $(blue)libft.a$(reset)\n"
				@ar rcs $(NAME) $(OBJS)

clean:
				$(RM) *.o

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re

# **************************************************************************** #
