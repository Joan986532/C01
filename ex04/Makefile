NAME = Sed

SOURCES = main.cpp

OBJECTS = $(SOURCES:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

#--------------------------------------#

all: $(NAME)

$(NAME): $(OBJECTS)
	c++ $(FLAGS) $(OBJECTS) -o $(NAME)

fclean: clean
	rm $(NAME)

clean:
	rm -f $(OBJECTS)

re: fclean all

.PHONY: all clean fclean re
