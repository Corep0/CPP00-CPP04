# Compilator
CC = c++
CF = -Wall -Werror -Wextra -std=c++98

# Program
PROG = zombieHord 

# Sources
SRC = Zombie.cpp	\
      zombieHorde.cpp	\
      main.cpp

# Color
GC = \033[0;32m
RC = \033[0;31m
BC = \033[0;34m
ENDC = \033[0m

all: 		$(PROG)

$(PROG):	$(SRC)
		@echo "$(GC) Compiling $(PROG) program..$(ENDC)"
		$(CC) $(CF) -o $(PROG) $(SRC)
		@echo "$(GC) $(PROG) ready to be used $(ENDC)"

clean:	
		@rm -f $(PROG)

re:		clean all

.PHONY:		re clean all
