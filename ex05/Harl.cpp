#include "Harl.hpp"

void	(Harl::*)(std::string level) {

	int	value;

	value = stoi(level);
	allTheComplains	functions[] = 
	{
		debug,
		info,
		warning,
		error
	};
}

void	Harl::debug(void) { std::cout << "debug" << std::endl; }

void	Harl::info(void) { std::cout << "info" << std::endl; }

void	Harl::warning(void) { std::cout << "warning" << std::endl; }

void	Harl::error(void) { std::cout << "error" << std::endl; }
