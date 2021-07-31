#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <cstring>

# define IS_CHAR 0
# define IS_INT 1
# define IS_FLOAT 2
# define IS_DOUBLE 3
# define IS_STR 4

// # define NAN 0/0.0
// # define POS_INF 1/0.0
// # define NEG_INF -1/0.0

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
	void printInt(int& i);
	void printFloat(float& f);
	void printDouble(double& d);
	void printStr(std::string& str);
	void convert();
};

#endif
