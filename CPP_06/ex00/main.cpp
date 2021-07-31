#include "Conversion.hpp"
// #include <iostream>

int main(int argc, char **argv) {
	if (argc != 2)
		return 0;
	// char c;
	// char* endPtr;
	// c = static_cast<char>(strtol(argv[1], &endPtr, 10));
	// if (endPtr == argv[1])
	// 	std::cout << "impossible" << std::endl;
	// else if (isprint(c) == 0)
	// 	std::cout << "Non displayable" << std::endl;
	// else
	// 	std::cout << c << std::endl;
	Conversion conv(argv[1]);
	conv.convert();
	return 0;
}
