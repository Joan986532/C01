#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl;
	std::string	str;

	if (argc == 2) {
		str = argv[1];
		harl.complain(str);
	}
	else
		std::cout << "error: not enough arguments" << std::endl;
	return (0);
}
