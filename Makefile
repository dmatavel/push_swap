NAME = push_swap
SRC = src/push_swap.c
OBJ = $(SRC:.c=.o)
LIB_PATH = include/libft/
LIBFT = include/libft/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@ $(LIBFT)

$(LIBFT):
	make -C $(LIB_PATH) all

all: $(NAME)

clean:
	rm -f src/*.o
	make -C $(LIB_PATH) clean

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)

re: fclean all

.PHONY: include all clean fclean re
