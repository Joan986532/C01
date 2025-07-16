NAME = harlFilter

SOURCES = main.cpp \
		  Harl.cpp

OBJECTS = $(SOURCES:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

#--------------------------------------#

all: $(NAME)

$(NAME): $(OBJETS)
	c++ $(FLAGS) $(OBJECTS) -o $(NAME)

fclean: clean
	rm $(NAME)

clean:
	rm -f $(OBJECTS)

re: fclean all

.PHONY: re clean fclean all
