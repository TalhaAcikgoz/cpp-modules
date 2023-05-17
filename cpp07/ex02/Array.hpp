#pragma once

template<typename T>
class Array {
	private:
		int size_;
		T	*arr;
	public:
		Array() : size_(0), arr(new T[0]) {}
		Array(unsigned int n) : size_(n), arr(new T[n]) {
			for (int i = 0; i < size_; i++) {
				this->arr[i] = 0;
			}
		}
		Array(const Array& c) : size_(c.size_), arr(new T[c.size_]) {
			for (int i = 0; i < size_; i++) {
				this->arr[i] = c.arr[i];
			}
		}
		~Array(){
			delete[] arr;
			arr = NULL;
		}

		Array	&operator=(const Array& c) {
			delete[] this->arr;
			this->arr = NULL;
			this->size_ = c.size_;
			this->arr = new T[this->size_];
			for (int i = 0; i < this->size_; i++) {
				this->arr[i] = c.arr[i];
			}
			return *this;
		}

		T		&operator[](unsigned int n) {
			if (n < 0 || n >= size_)
				throw Array::OutOfBoundException();
			return arr[n];
		}

		const T		&operator[](unsigned int n) const {
			if (n < 0 || n >= size_)
				throw Array::OutOfBoundException();
			return arr[n];
		}

		size_t	size() {
			return this->size_;
		}

		class OutOfBoundException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Out of Bounds";
				}
		};
};
