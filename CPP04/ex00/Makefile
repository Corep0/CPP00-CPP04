# Compilator
CC = c++
CF = -Wall -Werror -Wextra -std=c++98

# Program
NAME = animal 

# Header
INC = -I include/.

# Sources
SRCD = src/
SRC = 	$(SRCD)Dog.cpp		\
	$(SRCD)Cat.cpp		\
	$(SRCD)Animal.cpp	\
	$(SRCD)WrongAnimal.cpp	\
	$(SRCD)WrongCat.cpp	\
      	$(SRCD)main.cpp

# Color
GC = \033[0;32m
RC = \033[0;31m
BC = \033[0;34m
ENDC = \033[0m

all: 		$(NAME)

$(NAME):	$(SRC)
		@echo "$(GC) Compiling $(NAME) program..$(ENDC)"
		$(CC) $(CF) $(INC) -o $(NAME) $(SRC)
		@echo "$(GC) $(NAME) ready to be used $(ENDC)"

clean:	
		@rm -f $(NAME)

fclean:	
		@rm -f $(NAME)
		
re:		fclean clean all

.PHONY:		re clean fclean all
