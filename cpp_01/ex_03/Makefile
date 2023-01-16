NAME = zombie3
CC = g++ -std=c++98
FLAG = -Wall -Wextra -Werror -std=c++98
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