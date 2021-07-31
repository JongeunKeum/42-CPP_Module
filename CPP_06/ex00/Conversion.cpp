#include "Conversion.hpp"

Conversion::Conversion(char* str) {
	this->str = str;
}

Conversion::Conversion(const Conversion& copy) {
	this->str = copy.str;
}

Conversion& Conversion::operator=(const Conversion& copy) {
	this->str = copy.str;
	return *this;
}

char* Conversion::getStr() {
	return this->str;
}

int Conversion::checkType() {
	int i = 0;
	if (strlen(this->str) == 0)
		return IS_STR;
	else if (strlen(this->str) == 1 && !isdigit(this->str[0]))
		return IS_CHAR;
	else if (!strcmp(this->str, "nanf") || !strcmp(this->str, "inff") || !strcmp(this->str, "+inff") || !strcmp(this->str, "-inff"))
		return IS_FLOAT;
	else if (!strcmp(this->str, "nan") || !strcmp(this->str, "inf") || !strcmp(this->str, "+inf") || !strcmp(this->str, "-inf"))
		return IS_DOUBLE;
	if (this->str[i] == '+' || this->str[i] == '-')
		i++;
	while (isdigit(this->str[i]))
		i++;
	if (this->str[i] == '.' && this->str[i + 1] != '\0')
		i++;
	else if (this->str[i] == '.' && this->str[i + 1] == '\0')
		return IS_STR;
	else if (this->str[i] == '\0')
		return IS_INT;
	else
		return IS_STR;
	while (isdigit(this->str[i]))
		i++;
	if (this->str[i] == 'f' && this->str[i + 1] == '\0')
		return IS_FLOAT;
	else if (this->str[i] == '\0')
		return IS_DOUBLE;
	else
		return IS_STR;
}

void Conversion::printChar(char& c) {
	std::cout << "char\t: ";
	if (isprint(c) == 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << c << std::endl;
	std::cout << "int\t: " << static_cast<int>(c) << std::endl;
	std::cout << "float\t: " << static_cast<float>(c) << std::endl;
	std::cout << "double\t: " << static_cast<double>(c) << std::endl;
}

void Conversion::printInt(int& i) {
	std::cout << "char\t: ";
	if (isprint(i) == 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(i) << std::endl;
	std::cout << "int\t: " << i << std::endl;
	std::cout << "float\t: " << static_cast<float>(i) << std::endl;
	std::cout << "double\t: " << static_cast<double>(i) << std::endl;
}

void Conversion::printFloat(float& f) {
	std::cout << "char\t: ";
	if (isprint(f) == 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(f) << std::endl;
	std::cout << "int\t: " << static_cast<int>(f) << std::endl;
	std::cout << "float\t: " << f << std::endl;
	std::cout << "double\t: " << static_cast<double>(f) << std::endl;
}

void Conversion::printDouble(double& d) {
	std::cout << "char\t: ";
	if (isprint(d) == 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(d) << std::endl;
	std::cout << "int\t: " << static_cast<int>(d) << std::endl;
	std::cout << "float\t: " << static_cast<float>(d) << std::endl;
	std::cout << "double\t: " << d << std::endl;
}

// void Conversion::printStr(std::string& str) {
// 	std::cout << "char\t: impossible" << std::endl;
// 	std::cout << "int\t: impossible" << std::endl;
// 	std::cout << "float\t: ";
// 	if (str == "nanf" || str == "-inff" || str == "+inff")
// }

void Conversion::convert() {
	int type = checkType();
	char c = this->str[0];
	int i = atoi(this->str);
	float f = atof(this->str);
	char* endPtr;
	double d = strtod(this->str, &endPtr);
	switch (type)
	{
	case IS_CHAR:
		printChar(c);
		break;
	case IS_INT:
		printInt(i);
		break;
	case IS_FLOAT:
		printFloat(f);
		break;
	case IS_DOUBLE:
		printDouble(d);
		break;
	// case IS_STR:
	// 	std::string string = this->str;
	// 	printStr(string);
	// 	break;
	}
}
