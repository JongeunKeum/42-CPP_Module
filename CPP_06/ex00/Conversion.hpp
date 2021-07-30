#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>

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
	void convertChar();
	void convertInt();
	void convertFloat();
	void convertDouble();
};

#endif
