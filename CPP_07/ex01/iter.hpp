#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T* ptr, unsigned long length, void (*func)(T&)) {
	for (unsigned long i = 0; i < length; i++)
		func(ptr[i]);
}

template <typename T>
void printElements(T& elem) {
	std::cout << elem << std::endl;
}

template <typename T>
void addOne(T& elem) {
	elem++;
}

/* ***** Evaluation Code ***** */
class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) {
	o << rhs.get();
	return o;
}

template< typename T >
void print( T & x ) {
	std::cout << x << std::endl;
	return;
}

#endif
