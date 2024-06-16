# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/16 14:35:55 by mrekalde          #+#    #+#              #
#    Updated: 2024/06/16 16:16:51 by mrekalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRCS_DIR = ./
SRCS =	so_long.c \
		gnl/get_next_line.c gnl/get_next_line_utils.c \
		libft/ft_strrchr.c libft/ft_strcmp.c

OBJECTS = $(addprefix $(SRCS_DIR), $(SRCS:.c=.o))
DOTC = $(addprefix $(SRCS_DIR), $(SRCS))

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(OBJECTS): $(SRCS_DIR)%.o: $(SRCS_DIR)%.c
	@gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@gcc -o $(NAME) $(OBJECTS)
	@echo "(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ $(NAME) generated!"

clean:
	@$(RM) $(OBJECTS)
	@echo "¯\_(ツ)_/¯ Objects removed!"

fclean: clean
	@$(RM) $(NAME)
	@echo "(╯°□°）╯︵ ┻━┻ $(NAME) removed!"

re: fclean all

.PHONY: all clean fclean re