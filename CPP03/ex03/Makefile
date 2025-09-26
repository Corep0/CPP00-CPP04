# Compilator
CC = c++
CF = -Wall -Werror -Wextra -std=c++98
SF = -Wshadow -Wno-shadow

# Program
PROG = diamond 

# Sources
SRC = ClapTrap.cpp	\
      ScavTrap.cpp	\
      FragTrap.cpp	\
      DiamondTrap.cpp	\
      main.cpp

# Color
GC = \033[0;32m
RC = \033[0;31m
BC = \033[0;34m
ENDC = \033[0m

all: 		$(PROG)

$(PROG):	$(SRC)
		@echo "$(GC) Compiling $(PROG) program..$(ENDC)"
		$(CC) $(CF) $(SF) -o $(PROG) $(SRC)
		@echo "$(GC) $(PROG) ready to be used $(ENDC)"

clean:	
		@rm -f $(PROG)

re:		clean all

.PHONY:		re clean all
