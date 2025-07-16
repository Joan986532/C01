#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>

enum logs {

	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl {

	public:
		void	complain(std::string level);
	private:	
		logs	values;
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

};

#endif
