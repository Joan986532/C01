#include "HumanB.hpp"

HumanB::HumanB(std::string name) {

	this->_name = name;
	return ;
}

HumanB::HumanB(std::string name, Weapon weapon) {

	const std::string	&type = weapon.getType();

	this->weapon = new Weapon(type);
	this->_name = name;
	return ;
}

HumanB::~HumanB() {

	delete weapon;
	return ;
}

void	HumanB::attack() {

	std::cout << _name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weapon) {

	const std::string	&type = weapon.getType();

	this->weapon = new Weapon(type);
}
