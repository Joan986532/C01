#include "Harl.hpp"

Harl::Harl(void) {

	this->fntab[0] = &Harl::debug;
	this->fntab[1] = &Harl::info;
	this->fntab[2] = &Harl::warning;
	this->fntab[3] = &Harl::error;
}

void	Harl::complain(std::string level) {
	
	const std::string orders[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++) {

		if (level == orders[i]) {

			(this->*fntab[i])();
			return ;
		}
	}
	std::cout << "Level not registered" << std::endl;
}

void	Harl::debug(void){ std::cout << "debug: contextual info" << std::endl; }

void	Harl::info(void){ std::cout << "info: extensive info" << std::endl; }

void	Harl::warning(void) { std::cout << "warning: potential issue" << std::endl; }

void	Harl::error(void) { std::cout << "error: unreccoverable error" << std::endl; }
