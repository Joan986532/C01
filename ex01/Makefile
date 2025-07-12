NAME = Zombie

SOURCES = main.cpp \
	  Zombie.cpp \
	  newZombie.cpp \
	  randomChump.cpp \
	  zombieHorde.cpp

OBJECTS = $(SOURCES:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

#--------------------------------------#

all: $(NAME)

$(NAME): $(OBJECTS)
	c++ -g $(FLAGS) $(OBJECTS) -o $(NAME)

fclean: clean
	rm -f $(NAME)

clean: 
	rm $(OBJECTS)

re: fclean all

.PHONY: clean fclean re all
