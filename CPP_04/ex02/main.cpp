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

		std::cout << "-----------------------------\n" << std::endl;

		for (int i = 0; i < 10; ++i)
			Animals[i]->makeSound();

		std::cout << "\n-----------------------------\n" << std::endl;

		for (int i = 0; i < 10; ++i)
		{
			delete Animals[i];
		}
	}
	{
		std::cout << "\n-----------------------------\n" << std::endl;

		// Animal animals = new Animal[10];
		// Animal* animals = new Animal();
		Dog* dog = new Dog();
		Cat* cat = new Cat();

		dog->makeSound();
		cat->makeSound();

		delete dog;
		delete cat;
	}
	system("leaks abstract");
}
