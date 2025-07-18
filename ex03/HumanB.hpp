#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {

	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon &weapon);
		~HumanB();
		void	setWeapon(Weapon &weapon);
		void	attack();

	private:
		Weapon	*_weapon;
		std::string	_name;
};

#endif
