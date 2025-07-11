#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie {

	public:
		Zombie(std::string name);
		~Zombie();
		void		announce (void);
		Zombie* 	newZombie(std::string name);
		void		randomChump(std::string name);
		Zombie		*Kevin;
	private:
		std::string	_name;
};

#endif
