#pragma once

#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

class OutOfContainer : public std::exception {
	public:
		const char *what() const throw() {
			return "Value doesnt have in container";
		}
};

template <typename T>
int	easyfind(T &a, int b) {
	typename T::iterator it;
	for (it = a.begin(); it < a.end(); it++) {
		if (*it == b)
			return *it;
	}
	throw OutOfContainer();
}
