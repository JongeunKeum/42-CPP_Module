#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		Animal *Animals[10];
		for (int i = 0; i < 10; ++i)
		{
			if (i % 2 == 0)
				Animals[i] = new Dog();
			else
				Animals[i] = new Cat();
		}

		std::cout << "\n-----------------------------" << std::endl;
		Animal *copy = Animals[4];
		for (int i = 0; i < 100; ++i)
		{
			std::cout << ((Dog *)copy)->getBrain()->getIdea(i) << "    ";
			std::cout << ((Dog *)Animals[4])->getBrain()->getIdea(i) << std::endl;
		}
		std::cout << "-----------------------------\n" << std::endl;

		for (int i = 0; i < 10; ++i)
			Animals[i]->makeSound();

		std::cout << "\n-----------------------------\n" << std::endl;

		for (int i = 0; i < 10; ++i)
		{
			delete Animals[i];
		}
	}
	system("leaks brain_animal");
}
