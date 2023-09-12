#include <fstream>
#include <iostream>
#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter <Harl Level>" << std::endl;
		return (1);
	}
	Harl harl = Harl(std::string(argv[1]));

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
}
