NAME = Brain

SOURCES = main.cpp

OBJECTS = $(SOURCES:.cpp=.o)

FLAGS = -g -Wall -Wextra -Werror -std=c++98

#-----------------------------------------#

all: $(NAME)

$(NAME): $(OBJECTS)
	g++ $(FLAGS) $(OBJECTS) -o $(NAME)

fclean: clean
	rm -f $(NAME)

clean:
	rm $(OBJECTS)

re: fclean all

.PHONY: all re fclean clean
