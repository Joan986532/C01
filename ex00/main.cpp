#include "Zombie.hpp"

int	main(void) {

	Zombie 	Tadej("Tadej");
	Zombie	Lilian("Lilian");
	Zombie	*Jonas;

	Tadej.announce();
	Lilian.announce();

	randomChump("Remco");

	Jonas = newZombie("Jonas");
	Jonas->announce();
	delete Jonas;

	return (0);
}
