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

void	Harl::debug(void){ 

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl << std::endl;
}

void	Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years, whereas you started working here just last month." << std::endl << std::endl;
}

void	Harl::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}
