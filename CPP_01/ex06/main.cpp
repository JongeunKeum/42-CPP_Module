#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	std::string	level = argv[1];
	int	i;
	Karen	karen;
	i = -1;
	(!level.compare("DEBUG") && (i = 0));
	(!level.compare("INFO") && (i = 1));
	(!level.compare("WARNING") && (i = 2));
	(!level.compare("ERROR") && (i = 3));
	switch (i)
	{
	case 0:
		std::cout << "[ DEBUG ]" << std::endl;
		karen.complain("DEBUG");
		std::cout << std::endl;
	case 1:
		std::cout << "[ INFO ]" << std::endl;
		karen.complain("INFO");
		std::cout << std::endl;
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		karen.complain("WARNING");
		std::cout << std::endl;
	case 3:
		std::cout << "[ ERROR ]" << std::endl;
		karen.complain("ERROR");
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break ;
	}
	return (0);
}