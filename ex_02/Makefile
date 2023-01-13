NAME = account
CC = g++
FLAG = -Wall -Wextra -Werror -std=c++98
SOURCE = $(filter-out test.cpp, $(wildcard *.cpp))
OBJECT = $(patsubst %.cpp, %.o, $(SOURCE))

all: $(NAME)

$(NAME): $(OBJECT)
	$(CC) $(FLAG) $(OBJECT) -o $(NAME)
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(NAME)

clean:
	rm -rf $(OBJECT)

re: fclean all
# NAME = dream

# SRC = account.cpp
# OBJ = $(SRC:.cpp=.o)
# CC = g++
# RM = rm -f
# CPPFLAGS = -Wall -Wextra -Werror -std=c++98  ## -pedantic
# #pedantic derleyici tarafından desteklenmeyen ISO C++ standartlarına uymayan kodları tespit etmek için kullanılır.
# UNAME = $(shell uname -s)

# ifeq ($(UNAME), Linux)
# CPPFLAGS = -Wall -Wextra ##-pedantic
# $(warning Linux detected! Disabling -Werror and -std=c++98...)
# endif


# all: $(NAME)

# $(NAME): $(OBJ)
# 	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

# clean:
# 	$(RM) $(OBJ)

# fclean: clean
# 	$(RM) $(NAME)

# re: fclean $(NAME)

# .PHONY: all clean fclean re