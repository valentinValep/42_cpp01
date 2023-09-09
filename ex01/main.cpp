#include "Zombie.hpp"

#define zombiesNumber 5

int main(void)
{
	Zombie *zombies = zombieHorde(zombiesNumber, "Val");
	for (int i = 0; i < zombiesNumber; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}