NAME = libft
LIB_NAME = libft.a
CC = gcc
SRC = ./sources/
INCL = ./includes/
CFILES = $(SRC)*.c
TEST = ./test/*.c
OFILES = *.o
FLAGS = -Wall -Wextra -Werror

all: index_lib
	$(CC) -o $(NAME) $(LIB_NAME)
make_ofiles:
	$(CC) $(FLAGS) -c $(CFILES) $(TEST) -I$(INCL)
make_lib: make_ofiles
	ar rc $(LIB_NAME) $(OFILES)
index_lib: make_lib
	ranlib $(LIB_NAME)


norm_str:
	norminette $(SRC)ft_str*
norm_mem:
	norminette $(SRC)ft_mem*
norm_i:
	norminette $(SRC)ft_i* && norminette $(SRC)ft_a*
norm_put:
	norminette $(SRC)ft_put*
norm_t:
	norminette $(SRC)ft_t*;
norm: norm_str norm_mem norm_i norm_put norm_t

clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME) $(LIB_NAME)
re: fclean all
