#include "Array.hpp"

#define MAX_VAL 50

int main(int, char **)
{
	{
		Array<char> characters;
		std::cout << "Empty Array -> size : " << characters.size() << std::endl;
		Array<int> numbers(MAX_VAL);
		int *mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			std::cout << "\n=================" << std::endl;
			Array<int> tmp = numbers;
			Array<int> test(tmp);
			std::cout << "tmp[0] : " << tmp[0] << std::endl;
			std::cout << "test[0] : " << test[0] << std::endl;
			test[0] = 0;
			std::cout << "tmp[0] : " << tmp[0] << std::endl;
			std::cout << "test[0] : " << test[0] << std::endl;
		}
		std::cout << "\n=================" << std::endl;

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << "\n=================" << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
			std::cout << "numbers[" << i << "] : " << numbers[i] << std::endl;
			std::cout << "mirror[" << i << "]  : " << mirror[i] << std::endl;
			std::cout << std::endl;
		}
		delete[] mirror; //
	}
	system("leaks array");
	return 0;
}
