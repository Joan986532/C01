NAME = Violence

SOURCES = main.cpp \
		  Weapon.cpp \
		  HumanA.cpp \
		  HumanB.cpp

OBJECTS = $(SOURCES:.cpp=.o)

FLAGS = -g -Wall -Wextra -Werror -std=c++98

#-----------------------------------------#

all: $(NAME)

$(NAME): $(OBJECTS)
	c++ $(FLAGS) $(OBJECTS) -o $(NAME)

fclean: clean
	rm -f $(NAME)

clean:
	rm $(OBJECTS)

re: fclean all

.PHONY: all fclean clean
