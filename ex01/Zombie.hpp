#pragma once

#include <string>

class Zombie
{
private:
	std::string	_name;
public:
	void	announce(void);
	Zombie(std::string name);
	Zombie();
	~Zombie(void);
	void	setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);
