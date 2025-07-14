#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string	str;
	std::string	newFile;
	std::string	s1;
	std::string	s2;
	size_t		pos;
	size_t		size;

	if (argc != 4)
		return (1);
	s1 = argv[2];
	s2 = argv[3];
	size = s1.length();
	std::ifstream myFile(argv[1]);
	if (myFile.is_open())
	{
		newFile = argv[1];
		newFile += "_replace";
		std::ofstream fileReplace(newFile/*, std::fstream::app*/);
		while (getline(myFile, str))
		{
			//std::cout << str << std::endl;
			 while (1)
			{
				pos = str.find(s1);
				//std::cout << "pos: " << pos << std::endl;
				if (pos == std::string::npos)
					break ;
				str.erase(pos, size);
				//std::cout << str << std::endl;
				str.insert(pos, s2);
				//std::cout << str << std::endl;
			}
			fileReplace << str << std::endl;
		}
		fileReplace.close();
		myFile.close();
	}
	return (0);
}
