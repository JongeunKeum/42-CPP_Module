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
				pb.AddInfo((count - 1) % 8);
			else
				pb.AddInfo(count - 1);
		}
		else if (input == "SEARCH")
		{
			if (count > 8)
				pb.SearchInfo(8);
			else
				pb.SearchInfo(count);
		}
		else if (input == "EXIT")
		{
			if (count > 8)
				pb.ExitDelete(8);
			else
				pb.ExitDelete(count);
			break ;
		}
		else
			std::cout << "Invalid command. Please re-enter.\n" << std::endl;
	}
	return (0);
}