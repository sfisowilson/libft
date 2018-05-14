NAME = test
CC = gcc
SRC = ./sources/
INCL = ./includes/
CFILES = $(SRC)*.c
FLAGS = 

all:
	$(CC) -o $(NAME) $(CFILES) -I$(INCL)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
