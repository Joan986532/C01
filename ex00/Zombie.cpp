#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) {
	
	this->announce();
}

Zombie::~Zombie(void) {
	
	std::cout << this->_name << " was killed" << std::endl;
}

void Zombie::announce(void) {

	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
