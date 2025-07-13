#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) {

	setType(type);
	return ;
}

Weapon::~Weapon() { return ; }

void	Weapon::setType(std::string type) { this->_type = type ; }

const std::string	&Weapon::getType() { return (this->_type); }
