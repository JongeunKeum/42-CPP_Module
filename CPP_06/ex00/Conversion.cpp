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


