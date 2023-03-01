NAME = fixed
CC = g++ -std=c++98
SOURCE = $(wildcard *.cpp)
OBJECT = $(patsubst %.cpp, %.o, $(SOURCE))
FLAG = -Wall -Wextra -Werror

all: $(OBJECT)
	$(CC) $(FLAG) $(OBJECT) -o $(NAME)
	$(MAKE) clean

clean:
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all
