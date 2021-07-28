#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		Animal *Animals[4];
		for (int i = 0; i < 4; ++i)
		{
			if (i % 2 == 0)
				Animals[i] = new Dog();
			else
				Animals[i] = new Cat();
		}

		std::cout << "-----------------------------\n" << std::endl;

		for (int i = 0; i < 4; ++i)
			Animals[i]->makeSound();

		std::cout << "\n-----------------------------\n" << std::endl;

		for (int i = 0; i < 4; ++i)
		{
			delete Animals[i];
		}

		std::cout << "\n-----------------------------" << std::endl;

		{
			Dog basic;
			Dog tmp = basic;
			for (int i = 0; i < 100; ++i)
			{
				std::cout << basic.getBrain()->getIdea(i) << "     ";
				std::cout << tmp.getBrain()->getIdea(i) << std::endl;
			}
			std::cout << "-----------------------------\n" << std::endl;
			for (int i = 0; i < 100; ++i)
			{
				tmp.getBrain()->setIdea(i);
				std::cout << basic.getBrain()->getIdea(i) << "     ";
				std::cout << tmp.getBrain()->getIdea(i) << std::endl;
			}
		}
	}
	system("leaks brain_animal");
}
