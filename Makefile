
NAME = 21sh

CFLAGS = -Wall -Werror -Wextra
CFALGS += -I includes -I libft/includes

LIBFT := libft/libft.a

21SH = \
	ft_21sh.c \
	init_struct.c \

SRC = $(addprefix src/, $(21SH))
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(LIBFT):
	@make -C libft

$(OBJ): %.o: %.c
	@$(CC) -c $< -o $@

$(NAME): $(LIBFT) $(OBJ)
	@$(CC) -o $@ $^
	@echo "\033[32m *COMPILED 21SH EXECUTABLE*\033[0m"

clean:
	@rm -rf $(OBJ)
	@make -C libft clean
	@echo "\033[31m *21SH OBJECT FILES REMOVED*\033[0m"

fclean:
	@rm -rf $(OBJ) $(NAME)
	@make -C libft fclean
	@echo "\033[31m *21SH EXECUTABLE REMOVED*\033[0m"

re: fclean all