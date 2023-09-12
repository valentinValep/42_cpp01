#pragma once

#include <string>

enum e_level
{
	NO_LEVEL=255,
	DEBUG=0,
	INFO=1,
	WARNING=2,
	ERROR=3
};

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	e_level	_level;
public:
	Harl(std::string level);
	~Harl();
	void	complain(std::string level);
};
