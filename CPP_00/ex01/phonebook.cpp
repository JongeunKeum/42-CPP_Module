#include "phonebook.hpp"

void	Phonebook::AddInfo(int index)
{
	std::cout << "\nPlease enter your information for each field." << std::endl;
	std::cout << "1. First Name\t\t: ";
	getline(std::cin, firstName[index]);
	std::cout << "2. Last Name\t\t: ";
	getline(std::cin, lastName[index]);
	std::cout << "3. Nickname\t\t: ";
	getline(std::cin, nickname[index]);
	std::cout << "4. Phone Number\t: ";
	getline(std::cin, phoneNumber[index]);
	std::cout << "5. Darkest Secret\t: ";
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
	if (std::cin.eof())
		exit(1);
	index = atoi(idx.c_str());
	if (index <= 0 || index > 8)
	{
		std::cout << "Please enter only a number between 1 and 8." << std::endl;
		return ;
	}
	index--;
	std::cout << "1. First Name\t\t: " << firstName[index] << std::endl;
	std::cout << "2. Last Name\t\t: " << lastName[index] << std::endl;
	std::cout << "3. Nickname\t\t: " << nickname[index] << std::endl;
	std::cout << "4. Phone Number\t: " << phoneNumber[index] << std::endl;
	std::cout << "5. Darkest Secret\t: " << darkestSecret[index] << std::endl;
}

void	Phonebook::ExitDelete(int count)
{
	for (int i = 0; i < count; i++)
	{
		firstName[i].clear();
		lastName[i].clear();
		nickname[i].clear();
		phoneNumber[i].clear();
		darkestSecret[i].clear();
	}
}
