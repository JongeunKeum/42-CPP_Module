#include "phonebook.hpp"

int	main()
{
	int			count = 0;
	std::string	input;
	Phonebook	pb;

	std::cout << "Welcome to JKEUM's Phonebook >_@" << std::endl;
	while (true)
	{
		std::cout << "\nEnter the command(ADD / SEARCH / EXIT) : ";
		getline(std::cin, input);
		if (input == "ADD")
		{
			count++;
			if (count > 8)
			{
				std::cout << "You can add up to 8 information on this phone book. You can not add anymore." << std::endl;
				count = 8;
			}
			else
				pb.AddInfo(count - 1);
		}
		else if (input == "SEARCH")
			pb.SearchInfo(count);
		else if (input == "EXIT")
		{
			pb.ExitDelete(count);
			break ;
		}
		else
			std::cout << "Invalid command. Please re-enter.\n" << std::endl;
	}
	return (0);
}