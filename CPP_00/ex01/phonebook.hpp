#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Phonebook
{
private:
	std::string	firstName[8];
	std::string	lastName[8];
	std::string	nickname[8];
	std::string	login[8];
	std::string	postalAddress[8];
	std::string	emailAddress[8];
	std::string	phoneNumber[8];
	std::string	birthdayDate[8];
	std::string	favoriteMeal[8];
	std::string	underwearColor[8];
	std::string	darkestSecret[8];

public:
	void	AddInfo(int index);
	void	SearchInfo(int count);
	void	ExitDelete(int count);
};

#endif
