#include "Sed.hpp"

Replace::Replace(char *file, char *av2, char *av3): s1(av2), s2(av3), fileName(file) {
	
	this->sizes1 = s1.length();
	this->sizes2 = s2.length();
	return ;
}

Replace::~Replace() {

	return ;
}

void Replace::replaceLine() {

	size_t	pos = 0;

	while (1)
	{
		pos = str.find(s1, pos);
		if (pos == std::string::npos)
			break ;
		str.erase(pos, sizes1);
		str.insert(pos, s2);
		pos += sizes2;
	}
}

void	Replace::gettingLine() {

	std::ifstream myFile(fileName);

	if (myFile.is_open())
	{
		newFile = fileName;
		newFile += ".replace";
		std::ofstream fileReplace(newFile);		
		while (getline(myFile, str))
		{
			replaceLine();
			fileReplace << str;
			if (!myFile.eof())
				fileReplace << std::endl;
		}
	}
}
