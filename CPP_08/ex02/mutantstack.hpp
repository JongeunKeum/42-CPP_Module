#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(const MutantStack<T>& copy);
	MutantStack<T>& operator=(const MutantStack<T>& copy);
	virtual ~MutantStack();
	typedef typename std::stack<T>::iterator iterator;
	iterator begin();
	iterator end();
};

#endif
