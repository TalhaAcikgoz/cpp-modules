NAME = form
CC = g++
FLAG = -Wall -Wextra -Werror 
SOURCE = $(wildcard *.cpp)
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