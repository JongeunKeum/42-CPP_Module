#include "mutantstack.hpp"
#include "mutantstack.cpp"

int main() {
	{
		MutantStack<int> mstack;
		std::cout << "push -> 5, 17" << std::endl;
		mstack.push(5);
		mstack.push(17);
		std::cout << "top :\t" << mstack.top() << std::endl;	// 17 displays
		std::cout << "pop" << std::endl;
		mstack.pop();	// only 5 remains
		std::cout << "size :\t" << mstack.size() << std::endl;	// 1
		std::cout << "push -> 3, 5, 737" << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		std::cout << "top :\t" << mstack.top() << std::endl;	// 737 displays
		std::cout << "size :\t" << mstack.size() << std::endl;	// 4

		std::cout << "\nstack => [5, 3, 5, 737]" << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		std::cout << "iterator it(begin) :\t" << *it << std::endl;
		++it;
		std::cout << "iterator i(begin + 1) :\t" << *it << std::endl;
		--it;
		std::cout << "iterator i(begin) :\t" << *it << std::endl;
		std::cout << "display all elements" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::cout << "\nCopy Constructor" << std::endl;
		std::stack<int> s(mstack);
		s.pop();
		s.pop();
		s.pop();
		s.pop();
		s.push(42);
		std::cout << "stack s top :\t" << s.top() << std::endl;
		std::cout << "stack s size :\t" << s.size() << std::endl;
		std::cout << "MutantStack mstack top :\t" << mstack.top() << std::endl;
		std::cout << "MutantStack mstack size :\t" << mstack.size() << std::endl;
	}
	std::cout << std::endl;
	system("leaks a.out");
	return 0;
}
