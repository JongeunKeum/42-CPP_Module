#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <cstring>
# include <limits>

# define IS_CHAR 0
# define IS_INT 1
# define IS_FLOAT 2
# define IS_DOUBLE 3
# define IS_STR 4

class Conversion
{
private:
	char* str;
public:
	Conversion() {}
	Conversion(char* str);
	Conversion(const Conversion& copy);
	Conversion& operator=(const Conversion& copy);
	~Conversion() {}
	char* getStr();
	int checkType();
	void printChar(char& c);
	void printInt(long& i);
	void printFloat(float& f);
	void printDouble(double& d);
	void printStr(char* str);
	void convert();
};

#endif
