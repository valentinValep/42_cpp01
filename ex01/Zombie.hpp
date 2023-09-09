#pragma once

#include <string>

class Zombie
{
	public:
		void	announce(void);
		Zombie(std::string name);
		Zombie();
		~Zombie(void);
		void	setName(std::string name);
	private:
		std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);
