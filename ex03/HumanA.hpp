#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {

	public:
		Weapon	*weapon;
		HumanA(std::string name, Weapon weapon);
		~HumanA();
		void	attack();

	private:
		std::string	_name;
};

#endif
