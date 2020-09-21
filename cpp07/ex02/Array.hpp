/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 14:18:37 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/12 15:40:55 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template<typename T>
class	Array {
private:
	T *_array;
	unsigned _len;
public:
	Array();
	Array(unsigned n);
	Array(const Array<T> &c);
	/*virtual*/ ~Array();
	Array<T> &operator=(const Array &c);

	class	OutOfLimitsException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	T &operator[](unsigned int i);
	unsigned	size() const;
};

template<typename T>
Array<T>::Array(): _array(NULL), _len(0) {
}

template<typename T>
Array<T>::Array(unsigned n): _array(new T[n]()), _len(n) {
}

template<typename T>
Array<T>::Array(const Array<T> &c): _array(NULL), _len(c._len) {
	if (c._len) {
		_array = new T[c._len];
		for (unsigned i = 0; i < c._len; i++) {
			_array[i] = c._array[i];
		}
	}
}

template<typename T>
Array<T>::~Array() {
	delete[] _array;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &c) {
	delete[] _array;
	_array = NULL;
	_len = c._len;
	if (c._len) {
		_array = new T[c._len];
		for (unsigned i = 0; i < c._len; i++) {
			_array[i] = c._array[i];
		}
	}
	return *this;
}

template<typename T>
T	&Array<T>::operator[](unsigned int i) {
	if(i < 0 || i >= _len)
		throw OutOfLimitsException();
	return _array[i];
}

template<typename T>
unsigned	Array<T>::size() const {
	return _len;
}

template<typename T>
const char	*Array<T>::OutOfLimitsException::what() const throw() {
	return "Index is out of the array limits!";
}

#endif
