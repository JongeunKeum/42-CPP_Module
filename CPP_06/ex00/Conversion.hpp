#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <cstring>

# define IS_CHAR 0
# define IS_INT 1
# define IS_FLOAT 2
# define IS_DOUBLE 3
# define IS_STR 4

class Conversion
{
private:
	char* str;
	char c;
	int i;
	float f;
	double d;
public:
	Conversion() {}
	Conversion(char* str);
	Conversion(const Conversion& copy);
	Conversion& operator=(const Conversion& copy);
	~Conversion() {}
	char* getStr();
	int checkType();
	void printChar();
	void printInt();
	void printFloat();
	void printDouble();
	void callPrintFunc();
	void convert();
};

#endif
