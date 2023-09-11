#include <fstream>
#include <iostream>

int	replace(std::ifstream &ifs, std::ofstream &ofs, std::string s1, std::string s2)
{
	std::string	file_contents;

	ifs.seekg(0, std::ios::end);
	try
	{
		file_contents.reserve(ifs.tellg());
	}
	catch(const std::length_error& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}
	ifs.seekg(0, std::ios::beg);
	file_contents.assign((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());
	for (size_t i = 0; i < file_contents.length(); i++)
	{
		if (file_contents.find(s1, i) == i)
		{
			ofs << s2;
			i += s1.length() - 1;
		}
		else
			ofs << file_contents[i];
	}
	(void)ofs;
	(void)s1;
	(void)s2;
	return (0);
}

int	main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		filename;

	if (argc != 4)
	{
		std::cout << "Usage: ./replace <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	ifs.open(argv[1]);
	if (!ifs.is_open())
	{
		std::cout << "Error: could not open input file" << std::endl;
		return (1);
	}
	filename = argv[1] + std::string(".replace");
	ofs.open(filename.c_str());
	if (!ofs.is_open())
	{
		std::cout << "Error: could not open output file" << std::endl;
		return (1);
	}
	return (replace(ifs, ofs, argv[2], argv[3]));
}
