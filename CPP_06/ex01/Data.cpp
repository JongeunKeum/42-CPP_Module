#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
	char* res = new char[sizeof(ptr->n) + sizeof(ptr->c) + sizeof(ptr->s)];
	*reinterpret_cast<int*>(res) = ptr->n;
	*reinterpret_cast<char*>(res + sizeof(ptr->n)) = ptr->c;
	*reinterpret_cast<std::string*>(res + sizeof(ptr->n) + sizeof(ptr->c)) = ptr->s;
	return reinterpret_cast<uintptr_t>(res);
}

Data* deserialize(uintptr_t raw) {
	Data* data = new Data;
	char* ptr = reinterpret_cast<char*>(raw);
	data->n = *(reinterpret_cast<int*>(ptr));
	data->c = *(reinterpret_cast<char*>(ptr + sizeof(data->n)));
	data->s = *(reinterpret_cast<std::string*>(ptr + sizeof(data->n) + sizeof(data->c)));
	return data;
}
