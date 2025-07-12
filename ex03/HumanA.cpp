#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) {
	
	const std::string &type = weapon.getType();

	this->weapon = new Weapon(type);
	this->_name = name;
	return ;
}

HumanA::~HumanA() {

	delete weapon;
	return ;
}

void	HumanA::attack() {
	
	std::cout << _name << " attack with their " << this->weapon->getType() << std::endl;

}
