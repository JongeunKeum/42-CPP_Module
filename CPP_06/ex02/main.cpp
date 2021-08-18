#include "Base.hpp"

int main() {
	srand(time(NULL));

	Base* base = generate();
	identify(base);
	identify(*base);
	return 0;
}
