NAME = 42Boilerplate
FLAGS =
CC = gcc
SRC =	main.c\
		get.c
OBJ = $(SRC:%.c=srcs/%.o)

.PHONY: clean fclean all re norme newline $(LIBFT)/libft.a $(SMLX)/libsmlx.a

all: $(NAME)

newline:
	@echo "\033[38;5;166m42Boilerplate\033[0m\n"

%.o: %.c
	@echo "\033[1A\033[K\033[38;5;226mmaking $@\033[0m"
	@$(CC) $(FLAGS) -I includes -o $@ -c $<

$(NAME): $(SMLX)/libsmlx.a $(LIBFT)/libft.a newline $(OBJ)
	@echo "\033[1A\033[K\033[38;5;214mmaking $@\033[0m"
	@$(CC) $(FLAGS) -I includes -o $(NAME) $(OBJ)
	@echo "\033[1A\033[K\033[38;5;214m$@ done\033[0m"

clean:
	@echo "\033[38;5;166m42Boilerplate\033[0m\n"
	@rm -f $(OBJ)
	@echo "\033[1A\033[K\033[38;5;45mobject files removed\033[0m\n"

fclean: clean
	@echo "\033[38;5;166m42Boilerplate\033[0m\n"
	@rm -f $(NAME)
	@echo "\033[1A\033[K\033[38;5;87m$(NAME) removed\033[0m\n"

re: fclean all

norme: newline
	norminette $(OBJ:.o=.c) include
