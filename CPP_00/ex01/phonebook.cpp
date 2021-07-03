#include "phonebook.hpp"

void	Phonebook::AddInfo(int index)
{
	std::cout << "\nPlease enter your information for each field." << std::endl;
	std::cout << "01. First Name\t\t: ";
	getline(std::cin, firstName[index]);
	std::cout << "02. Last Name\t\t: ";
	getline(std::cin, lastName[index]);
	std::cout << "03. Nickname\t\t: ";
	getline(std::cin, nickname[index]);
	std::cout << "04. Login\t\t: ";
	getline(std::cin, login[index]);
	std::cout << "05. Postal Address\t: ";
	getline(std::cin, postalAddress[index]);
	std::cout << "06. Email Address\t: ";
	getline(std::cin, emailAddress[index]);
	std::cout << "07. Phone Number\t: ";
	getline(std::cin, phoneNumber[index]);
	std::cout << "08. Birthday Date\t: ";
	getline(std::cin, birthdayDate[index]);
	std::cout << "09. Favorite Meal\t: ";
	getline(std::cin, favoriteMeal[index]);
	std::cout << "10. Underwear Color\t: ";
	getline(std::cin, underwearColor[index]);
	std::cout << "11. Darkest Secret\t: ";
	getline(std::cin, darkestSecret[index]);
}

void	AlignPrintList(std::string str)
{
	if (str.length() > 10)
		std::cout << std::setw(10) << str.substr(0, 9).append(".");
	else
		std::cout << std::setw(10) << str;
	std::cout << "|";
}

void	Phonebook::SearchInfo(int count)
{
	std::cout << "\n|+:#+:#+:#+:#+:#+:#+:#:+:#+:#+:#+:#+:#+:#+:#|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < count; i++)
	{
		std::cout << "|         " << i + 1 << "|";
		AlignPrintList(firstName[i]);
		AlignPrintList(lastName[i]);
		AlignPrintList(nickname[i]);
		std::cout << std::endl;
	}
	std::cout << "|+:#+:#+:#+:#+:#+:#+:#:+:#+:#+:#+:#+:#+:#+:#|" << std::endl;
	int			index;
	std::string	idx;
	std::cout << "\nPlease enter the number : ";
	getline(std::cin, idx);
	index = atoi(idx.c_str());
	if (index <= 0 || index > 8)
	{
		std::cout << "Please enter only a number between 1 and 8." << std::endl;
		return ;
	}
	else if (index > count)
	{
		std::cout << "There is no information in the index " << index << "." << std::endl;
		return ;
	}
	index--;
	std::cout << "01. First Name\t\t: " << firstName[index] << std::endl;
	std::cout << "02. Last Name\t\t: " << lastName[index] << std::endl;
	std::cout << "03. Nickname\t\t: " << nickname[index] << std::endl;
	std::cout << "04. Login\t\t: " << login[index] << std::endl;
	std::cout << "05. Postal Address\t: " << postalAddress[index] << std::endl;
	std::cout << "06. Email Address\t: " << emailAddress[index] << std::endl;
	std::cout << "07. Phone Number\t: " << phoneNumber[index] << std::endl;
	std::cout << "08. Birthday Date\t: " << birthdayDate[index] << std::endl;
	std::cout << "09. Favorite Meal\t: " << favoriteMeal[index] << std::endl;
	std::cout << "10. Underwear Color\t: " << underwearColor[index] << std::endl;
	std::cout << "11. Darkest Secret\t: " << darkestSecret[index] << std::endl;
}

void	Phonebook::ExitDelete(int count)
{
	for (int i = 0; i < count; i++)
	{
		firstName[i].clear();
		lastName[i].clear();
		nickname[i].clear();
		login[i].clear();
		postalAddress[i].clear();
		emailAddress[i].clear();
		phoneNumber[i].clear();
		birthdayDate[i].clear();
		favoriteMeal[i].clear();
		underwearColor[i].clear();
		darkestSecret[i].clear();
	}
}
