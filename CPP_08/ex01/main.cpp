#include "span.hpp"

int main()
{
	srand(time(NULL));
	{
		Span sp = Span(5);
		sp.addNumber(4);
		sp.addNumber(98);
		sp.addNumber(10);
		sp.addNumber(2);
		sp.addNumber(17);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		try
		{
			sp.addNumber(42);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		Span big = Span(10000);
		std::vector<int> temp;
		for (int i = 0; i < 10000; i++)
			temp.push_back(rand());
		big.addNumber(temp.begin(), temp.end());
		std::cout << big.shortestSpan() << std::endl;
		std::cout << big.longestSpan() << std::endl;
	}
	return 0;
}
