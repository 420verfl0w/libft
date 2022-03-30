# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brda-sil <brda-sil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 18:23:35 by stales            #+#    #+#              #
#    Updated: 2022/03/29 20:43:28 by brda-sil         ###   ########.fr        #
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
SRCS			= $(shell find . -name '*.c' -and ! -name '*bonus*' | sort)
BONUS_SRC		= $(shell find . -name '*.c' | sort)

OBJS			= $(SRCS:.c=.o)
BONUS_OBJS		= $(BONUS_SRC:.c=.o)
CFLAGS			= -Wall -Wextra -Werror -I.
NAME			= libft.a

# **************************************************************************** #

# **************************************************************************** #
# Building rules

all:			$(NAME)

%.o: %.c
	@tabs 18
	@printf "$(font_color)[$(green)+$(font_color)] Creation of the object $(bold)$< $(blinking)$(font_color)\t-> $(reset)$(bold) $@ $(reset)\n"
	@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):		$(OBJS)
	@printf "$(font_color)[$(green)+$(font_color)] Creation of $(bold)libft.a$(reset)\n"
	@ar rcs $(NAME) $(OBJS)
	$(print_ascii)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

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
