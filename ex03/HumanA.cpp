#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) {}

HumanA::~HumanA() { return ; }

void	HumanA::attack() {
	
	std::cout << _name << " attack with their " << this->_weapon.getType() << std::endl;

}
