#include <iostream>
#include <string>

class Harl
{
	 public:
		Harl();
		void	complain(std::string level);
	 private:
		void	(Harl::**fntab)(void);
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};
