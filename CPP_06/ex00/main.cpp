#include "Conversion.hpp"
// #include <iostream>

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Argument Error\n" << std::endl;
		return 0;
	}
	Conversion conv(argv[1]);
	conv.convert();
	return 0;
}
