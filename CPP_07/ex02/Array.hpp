#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
private:
	T* arr_;
	unsigned int n_;
public:
	Array() { this->arr_ = new T[0]; this->n_ = 0; }
	Array(unsigned int n) { this->arr_ = new T[n]; this->n_ = n; }
	Array(const Array& copy) {
		this->n_ = copy.n_;
		this->arr_ = new T[this->n_];
		for (unsigned int i = 0; i < this->n_; i++)
			this->arr_[i] = copy.arr_[i];
	}
	Array& operator=(const Array& copy) {
		if (this != &copy) {
			delete[] this;
			this->n_ = copy.n_;
			this->arr_ = new T[this->n_];
			for (unsigned int i = 0; i < this->n_; i++)
				this->arr_[i] = copy.arr_[i];
		}
		return *this;
	}
	T& operator[](long long idx) {
		if (idx >= this->n_ || idx < 0)
			throw (std::out_of_range("Index Out of Range!!"));
		return this->arr_[idx];
	}
	const T& operator[](const long long idx) const {
		if (idx >= this->n_ || idx < 0)
			throw (std::out_of_range("Index Out of Range!!"));
		return this->arr_[idx];
	}
	unsigned int size(void) const { return this->n_; }
	~Array() { delete[] this->arr_; }
};

#endif
