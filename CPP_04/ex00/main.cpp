#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	dog->makeSound();
	cat->makeSound();
	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;

	return 0;
}