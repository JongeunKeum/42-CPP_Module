#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() {}
	MutantStack(const MutantStack<T>& copy) { std::stack<T>(copy); }
	MutantStack<T>& operator=(const MutantStack<T>& copy) { if (this != &copy) *this = copy; return *this; }
	virtual ~MutantStack() {}
	typedef typename std::stack<T>::iterator iterator;
	iterator begin();
	iterator end();
	typedef typename std::stack<T>::const_iterator iterator;
	const iterator begin() const;
	const iterator end() const;
	typedef typename std::stack<T>::reverse_iterator reverse_iterator;
	reverse_iterator rbegin();
	reverse_iterator rend();
	typedef typename std::stack<T>::const_reverse_iterator reverse_iterator;
	const reverse_iterator rbegin() const;
	const reverse_iterator rend() const;
};

#endif
