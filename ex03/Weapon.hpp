#pragma once

#include <string>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon(std::string type);
	Weapon();
	~Weapon(void);
	void	setType(std::string type);
	const std::string&	getType(void);
};
