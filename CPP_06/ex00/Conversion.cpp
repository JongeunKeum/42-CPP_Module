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

void Conversion::printChar() {

}

void Conversion::printInt() {

}

void Conversion::printFloat() {

}

void Conversion::printDouble() {

}

void Conversion::callPrintFunc() {

}

void Conversion::convert() {
	int type = checkType();
	switch (type)
	{
	case IS_CHAR:
		this->c = this->str[0];
		callPrintFunc();
		break;
	case IS_INT:
		this->i = atoi(this->str);
		callPrintFunc();
		break;
	case IS_FLOAT:
		this->f = atof(this->str);
		callPrintFunc();
		break;
	case IS_DOUBLE:
		char* endPtr;
		this->d = strtod(this->str, &endPtr);
		callPrintFunc();
		break;
	}
}
