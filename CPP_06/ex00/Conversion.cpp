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
	for (int i = 0; this->str[i]; i++)
		this->str[i] = tolower(this->str[i]);
	if (strlen(this->str) == 0)
		return IS_STR;
	else if (strlen(this->str) == 1 && !isdigit(this->str[0]))
		return IS_CHAR;
	else if (!strcmp(this->str, "nanf") || !strcmp(this->str, "inff") || !strcmp(this->str, "+inff") || !strcmp(this->str, "-inff"))
		return IS_FLOAT;
	else if (!strcmp(this->str, "nan") || !strcmp(this->str, "inf") || !strcmp(this->str, "+inf") || !strcmp(this->str, "-inf"))
		return IS_DOUBLE;
	int i = 0;
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
	std::cout << "------char------" << std::endl;
	std::cout << "char\t: ";
	if (isprint(c) == 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << c << std::endl;
	std::cout << "int\t: " << static_cast<int>(c) << std::endl;
	std::cout << "float\t: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double\t: " << static_cast<double>(c) << ".0" << std::endl;
}

void Conversion::printInt(long& i) {
	std::cout << "------int------" << std::endl;
	std::cout << "char\t: ";
	if (isprint(i) == 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(i) << std::endl;
	std::cout << "int\t: ";
	if (i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max())
		std::cout << "impossible" << std::endl;
	else
		std::cout << i << std::endl;
	std::cout << "float\t: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double\t: " << static_cast<double>(i) << ".0" << std::endl;
}

void Conversion::printFloat(float& f) {
	std::cout << "------float------" << std::endl;
	std::cout << "char\t: ";
	if (isnan(f) || isinf(f))
		std::cout << "impossible" << std::endl;
	else if (isprint(f) == 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(f) << std::endl;
	std::cout << "int\t: ";
	if (isnan(f) || isinf(f))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
	std::cout << "float\t: " << f;
	if (f - static_cast<int>(f) == 0)
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
	std::cout << "double\t: " << static_cast<double>(f);
	if (f - static_cast<int>(f) == 0)
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
}

void Conversion::printDouble(double& d) {
	std::cout << "------double------" << std::endl;
	std::cout << "char\t: ";
	if (isnan(d) || isinf(d))
		std::cout << "impossible" << std::endl;
	else if (isprint(d) == 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(d) << std::endl;
	std::cout << "int\t: ";
	if (isnan(d) || isinf(d))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
	std::cout << "float\t: " << static_cast<float>(d);
	if (d - static_cast<int>(d) == 0)
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
	std::cout << "double\t: " << d;
	if (d - static_cast<int>(d) == 0)
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
}

void Conversion::printStr() {
	std::cout << "char\t: impossible" << std::endl;
	std::cout << "int\t: impossible" << std::endl;
	std::cout << "float\t: impossible" << std::endl;
	std::cout << "double\t: impossible" << std::endl;
}

void Conversion::convert() {
	int type = checkType();
	if (type == IS_CHAR) {
		char c = this->str[0];
		printChar(c);
	}
	else if (type == IS_INT) {
		long i = atol(this->str);
		printInt(i);
	}
	else if (type == IS_FLOAT) {
		float f = atof(this->str);
		printFloat(f);
	}
	else if (type == IS_DOUBLE) {
		char* endPtr;
		double d = strtod(this->str, &endPtr);
		printDouble(d);
	}
	else
		printStr();
}
