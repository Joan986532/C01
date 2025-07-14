#include <iostream>
#include <fstream>
#include "Sed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "error" << std::endl;
		return (1);
	}
	Replace  replace(argv[1], argv[2], argv[3]);
	replace.gettingLine();
}
