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
	Array() { this->arr_ = new T[]; this->n_ = 0; }
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
	T& operator[](const unsigned int idx) {
		if (idx >= this->n_)
			throw std::exception;
		return this->arr_[idx];
	}
	// const T& operator[](const int idx) const;
	unsigned int size(void) { return this->n_; }
	~Array() { if (this->n_) delete[] this->arr; }
};

#endif
