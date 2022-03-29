# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brda-sil <brda-sil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 18:23:35 by stales            #+#    #+#              #
#    Updated: 2022/03/29 19:06:02 by brda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#  Bash Color

green			= \033[38;5;82m
blue			= \033[38;5;75m
red				= \033[38;5;196m
yellow			= \033[38;5;226m

blinking		= \033[5m
reset			= \033[0m

font_color		= $(blue)
bold			= $(red)

define print_ascii
	@printf "$(red)"
	@printf "██▓     ██▓ ▄▄▄▄     █████▒▄▄▄█████▓\n"
	@printf "▓██▒    ▓██▒▓█████▄ ▓██   ▒ ▓  ██▒ ▓▒\n"
	@printf "▒██░    ▒██▒▒██▒ ▄██▒████ ░ ▒ ▓██░ ▒░\n"
	@printf "▒██░    ░██░▒██░█▀  ░▓█▒  ░ ░ ▓██▓ ░\n"
	@printf "░██████▒░██░░▓█  ▀█▓░▒█░      ▒██▒ ░\n"
	@printf "░ ▒░▓  ░░▓  ░▒▓███▀▒ ▒ ░      ▒ ░░\n"
	@printf "░ ░ ▒  ░ ▒ ░▒░▒   ░  ░          ░\n"
	@printf "  ░ ░    ▒ ░ ░    ░  ░ ░      ░\n"
	@printf "    ░  ░ ░   ░\n"
	@printf "                  ░\n"
	@printf "$(reset)"
endef

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
					ft_isxdigit.c \
					ft_itoa.c \
					ft_memalloc.c \
					ft_memccpy.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memdel.c \
					ft_memmove.c \
					ft_memset.c \
					ft_nbrlen.c \
					ft_putchar_fd.c \
					ft_putchar.c \
					ft_putendl_fd.c \
					ft_putendl.c \
					ft_putnbr_fd.c \
					ft_putnbr.c \
					ft_putstr_fd.c \
					ft_putstr.c \
					ft_rev_int.c \
					ft_split.c \
					ft_str_is_alpha.c \
					ft_str_is_lowercase.c \
					ft_str_is_numeric.c \
					ft_str_is_printable.c \
					ft_str_is_uppercase.c \
					ft_strcat.c \
					ft_strcchr.c \
					ft_strchr.c \
					ft_strclr.c \
					ft_strcmp.c \
					ft_strcpy.c \
					ft_strcspn.c \
					ft_strdel.c \
					ft_strdup.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strlen.c \
					ft_strlowcase.c \
					ft_strncat.c \
					ft_strncmp.c \
					ft_strncpy.c \
					ft_strndup.c \
					ft_strnew.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_strrev.c \
					ft_strspn.c \
					ft_strstr.c \
					ft_strtok.c \
					ft_strupcase.c \
					ft_swap.c \
					ft_tolower.c \
					ft_toupper.c \
					ft_hex.c \
					ft_list_create_void.c \
					ft_list_create.c \
					ft_list_free.c \
					ft_list_push.c \
					ft_list_pop.c \
					ft_list_len.c \
					ft_list_push_back.c \
					ft_list_pop_back.c \
					ft_list_get.c	\
					ft_list_remove.c \
					ft_substr.c		\
					ft_strjoin.c	\
					ft_strmapi.c	\
					ft_strrem.c		\
					ft_strtrim.c	\
					ft_striteri.c	\
					ft_get_words.c

BONUS_SRC		=	ft_lstnew_bonus.c \
					ft_lstadd_front_bonus.c \
					ft_lstsize_bonus.c \
					ft_lstadd_back_bonus.c

OBJS			= $(SRCS:.c=.o)
BONUS_OBJS		= $(BONUS_SRC:.c=.o)
CFLAGS			= -Wall -Wextra -Werror -I.
NAME			= libft.a

# **************************************************************************** #

# **************************************************************************** #
# Building rules

all:			$(NAME)

%.o: %.c
	@printf "$(font_color)[$(green)+$(font_color)] Creation of the object $(bold)$< $(blinking)$(font_color) -> $(reset)$(bold) $@ $(reset)\n"
	@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):		$(OBJS)
	@printf "$(font_color)[$(green)+$(font_color)] Creation of $(bold)libft.a$(reset)\n"
	@ar rcs $(NAME) $(OBJS)
	$(print_ascii)

clean:
	@printf "$(font_color)[$(red)-$(font_color)] Deleting object files$(reset)\n"
	@$(RM) $(OBJS)
	@$(RM) $(BONUS_OBJS)

fclean:			clean
	@printf "$(font_color)[$(red)-$(font_color)] Deleting $(bold)$(NAME)$(reset)\n"
	@$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
	@printf "$(font_color)[$(green)+$(font_color)] Creation of $(bold)libft.a$(font_color) with bonus $(reset)\n"
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	$(print_ascii)

.PHONY:			all clean fclean re

# **************************************************************************** #
