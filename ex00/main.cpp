#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = newZombie("Val");
	zombie->announce();
	delete zombie;
	randomChump("Alan");
	return (0);
}