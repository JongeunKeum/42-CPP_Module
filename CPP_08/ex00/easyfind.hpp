#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <algorithm>

template <typename T>
int easyfind(T &container, int val) {
	typename T::iterator iter;
	iter = std::find(container.begin(), container.end(), val);
	if (iter == container.end())
		throw (std::out_of_range("Not found!!!"));
	return *iter;
}

#endif
