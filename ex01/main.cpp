#include "Zombie.hpp"

int	main(void) {

	Zombie 	Tadej("Tadej");
	Zombie	Lilian("Lilian");
	Zombie	*Jonas;
	Zombie	*Quinn;

	Tadej.announce();
	Lilian.announce();

	randomChump("Remco");

	Jonas = newZombie("Jonas");
	Jonas->announce();

	Quinn = zombieHorde(15, "Quinn");
	for (int i = 0; i < 15; i++) {
		Quinn[i].announce();
	}

	delete Jonas;
	delete [] Quinn;

	return (0);
}
