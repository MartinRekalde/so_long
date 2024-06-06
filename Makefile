NAME = so_long

SRCS_DIR = ./
SRCS = so_long.c gnl/get_next_line.c gnl/get_next_line_utils.c

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