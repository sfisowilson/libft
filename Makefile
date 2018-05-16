NAME = libft
LIB_NAME = libft.a
CC = gcc
SRC = ./sources/
INCL = ./includes/
CFILES = $(SRC)*.c
<<<<<<< HEAD
OFILES = *.o
FLAGS = -Wall -Wextra -Werror
=======
OFILES = *.c
FLAGS = -Wall Wextra Werror
>>>>>>> 7f7c97c97e6795109cdbf6e87312277b070a9e1a

all: index_lib
	$(CC) -o $(NAME) $(LIB_NAME)
make_ofiles:
<<<<<<< HEAD
	$(CC) $(FLAGS) -c $(CFILES) -I$(INCL)
make_lib: make_ofiles
	ar rc $(LIB_NAME) $(OFILES)
index_lib: make_lib
=======
	$(CC) -c $(FLAGS) $(CFILES) -I$(INCL)
make_lib: make_ofiles
	ar rc $(LIB_NAME) $(OFILES)
index_lib:
>>>>>>> 7f7c97c97e6795109cdbf6e87312277b070a9e1a
	ranlib $(LIB_NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME) $(LIB_NAME)
re: fclean all
