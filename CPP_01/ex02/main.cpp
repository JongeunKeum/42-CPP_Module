#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR;
	std::string	&stringREF = str;

	stringPTR = &str;
	std::cout << "string     : " << &str << std::endl;
	std::cout << "stringOrig : " << str << "\n" << std::endl;
	std::cout << "stringPTR  : " << stringPTR << std::endl;
	std::cout << "stringOrig : " << *stringPTR << "\n" << std::endl;
	std::cout << "stringREF  : " << &stringREF << std::endl;
	std::cout << "stringOrig : " << stringREF << "\n" << std::endl;
}
