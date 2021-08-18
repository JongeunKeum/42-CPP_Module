#include "Data.hpp"

int main() {
	Data* ptr = new Data;
	ptr->n = 42;
	ptr->c = 'c';
	ptr->s = "serialize";

	std::cout << "===== Original Data Structure =====" << std::endl;
	std::cout << ptr->n << " " << ptr->c << " " << ptr->s << std::endl;

	uintptr_t raw = serialize(ptr);
	std::cout << "====== Serialized Raw Value ======" << std::endl;
	std::cout << raw << std::endl;

	Data* res = deserialize(raw);
	std::cout << "=== Deserialized Data Structure ===" << std::endl;
	std::cout << res->n << " " << res->c << " " << res->s << " " << std::endl;

	return 0;
}
