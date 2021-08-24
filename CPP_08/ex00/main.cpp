#include "easyfind.hpp"
#include <vector>
#include <deque>

int main() {
	/* ******* Vector ******* */
	std::vector<int> vec;
	vec.push_back(4);
	vec.push_back(2);
	vec.push_back(42);
	std::cout << "Trying to access an existing value" << std::endl;
	try
	{
		std::cout << "easyfind(vec, 42): " << easyfind(vec, 42) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nTrying to access a value does not exist" << std::endl;
	try
	{
		std::cout << "easyfind(vec, 10): " << easyfind(vec, 10) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n" << std::endl;

	/* ******* Deque  ******* */
	std::deque<int> deq;
	deq.push_back(4);
	deq.push_back(2);
	deq.push_back(42);
	std::cout << "Trying to access an existing value" << std::endl;
	try
	{
		std::cout << "easyfind(deq, 42): " << easyfind(deq, 42) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nTrying to access a value does not exist" << std::endl;
	try
	{
		std::cout << "easyfind(deq, 10): " << easyfind(deq, 10) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
