# Compilator
CC = c++
CF = -Wall -Werror -Wextra -Wout-of-line-declaration -std=c++98

# Program
PROG = account 

# Include
HEAD_DIR = include
HEAD = $(HEAD_DIR)/Account.hpp

# Sources
SRC = 	Account.cpp \
	tests.cpp

# Color
GC = \033[0;32m
RC = \033[0;31m
BC = \033[0;34m
ENDC = \033[0m

all: 		$(PROG)

$(PROG):	$(SRC)
		@echo "$(GC) Compiling $(PROG) program..$(ENDC)"
		$(CC) $(CF) -o $(PROG) $(SRC) -I$(HEAD_DIR)
		@echo "$(GC) $(PROG) ready to be used $(ENDC)"

clean:	
		@rm -f $(PROG)

re:		clean all

.PHONY:		re clean all
