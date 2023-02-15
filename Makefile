NAME = push_swap
SRC_PATH = .
SRCS = $(shell find $(SRC_PATH) -name "*.c")
OBJ = $(SRCS:.c=.o)
LIB_PATH = libft/
LIBFT = libft/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@ $(LIBFT)

$(LIBFT):
	make -C $(LIB_PATH) all

all: $(NAME)

clean:
	rm -f *.o
	make -C $(LIB_PATH) clean

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)

re: fclean all

.PHONY: include all clean fclean re
