#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	std::string	level = argv[1];
	std::string	levelArray[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int	i;
	Karen	karen;
	for (i = 0; i < 4; i++)
	{
		if (!level.compare(levelArray[i]))
			break ;
	}
	switch (i)
	{
	case 0:
		std::cout << "[ " << levelArray[0] << " ]" << std::endl;
		karen.complain(levelArray[0]);
		std::cout << std::endl;
	case 1:
		std::cout << "[ " << levelArray[1] << " ]" << std::endl;
		karen.complain(levelArray[1]);
		std::cout << std::endl;
	case 2:
		std::cout << "[ " << levelArray[2] << " ]" << std::endl;
		karen.complain(levelArray[2]);
		std::cout << std::endl;
	case 3:
		std::cout << "[ " << levelArray[3] << " ]" << std::endl;
		karen.complain(levelArray[3]);
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break ;
	}
	return (0);
}