#ifndef SED_H
# define SED_H

#include <iostream>
#include <fstream>

class Replace
{
	 public:
		void	gettingLine();
		void	replaceLine();
		Replace(char *file, char *av2, char *av3);
		~Replace();

	 private:
		std::string fileName;
		std::string newFile;
		std::string	str;
		std::string	s1;
		std::string	s2;
		size_t		sizes1;
		size_t		sizes2;
};

#endif
