#include "span.hpp"

void Span::addNumber(int num) {
	if (this->vec_.size() == this->n_)
		throw (std::length_error("Cannot add more!!!"));
	this->vec_.push_back(num);
}

int Span::shortestSpan(void) {
	if (this->vec_.size() < 2)
		throw (std::length_error("Cannot find shortest span!!!"));
	std::vector<int> temp = this->vec_;
	sort(temp.begin(), temp.end());
	std::vector<int>::iterator prev = temp.begin();
	std::vector<int>::iterator next = temp.begin() + 1;
	int min = std::numeric_limits<int>::max();
	int absVal;
	for (; next != temp.end(); prev++, next++) {
		absVal = *next - *prev;
		if (min > absVal)
			min = absVal;
	}
	return min;
}

int Span::longestSpan(void) {
	if (this->vec_.size() < 2)
		throw (std::length_error("Cannot find longest span!!!"));
	std::vector<int> temp = this->vec_;
	sort(temp.begin(), temp.end());
	return temp.back() - temp.front();
}
