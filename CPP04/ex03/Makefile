# Compilator
CC = c++
CF = -Wall -Werror -Wextra -std=c++98

# Program
NAME =  

# Sources
SRC = ICharacter.cpp	\ 
      main.cpp

# Color
GC = \033[0;32m
RC = \033[0;31m
BC = \033[0;34m
ENDC = \033[0m

all: 		$(NAME)

$(NAME):	$(SRC)
		@echo "$(GC) Compiling $(NAME) program..$(ENDC)"
		$(CC) $(CF) -o $(NAME) $(SRC)
		@echo "$(GC) $(NAME) ready to be used $(ENDC)"

clean:	
		@rm -f $(NAME)

re:		clean all

.PHONY:		re clean all
