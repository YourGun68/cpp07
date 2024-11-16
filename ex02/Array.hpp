
#pragma once

#include <iostream>
#include <string>

template <class Tmp>
class Array
{
	protected:
		Tmp				*_array;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int i);
		Array(Array<Tmp> const& ptr);
		~Array();

		Array<Tmp>		&operator=(Array<Tmp> const&);
		Tmp				&operator[](unsigned int i);

		void			display(std::ostream& o) const;
		unsigned int	size() const;
};

template <class Tmp>
std::ostream	&operator<<(std::ostream& o, Array<Tmp>const& cl);

template <class Tmp>
Array<Tmp>::Array() {
	_array = new Tmp[0];
	_size = 0;
}

template <class Tmp>
Array<Tmp>::Array(unsigned int i) {
	Tmp*	init = new Tmp();

	_size = i;
	_array = new Tmp[_size];
	for (unsigned int j = 0; j < _size; j++)
	{
		_array[j] = *init;
	}
	delete init;
}

template <class Tmp>
Array<Tmp>::Array(Array const& ptr) {
	_array = NULL;
	operator=(ptr);
}

template <class Tmp>
Array<Tmp>::~Array() {
	delete[] _array;
}

template <class Tmp>
Array<Tmp>&	Array<Tmp>::operator=(Array<Tmp> const& ptr) {
	if (_array != NULL)
		delete[] _array;
	_size = ptr._size;
	_array = new Tmp[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = ptr._array[i];
	return (*this);
}

template <class Tmp>
Tmp&			Array<Tmp>::operator[](unsigned int i) {
	if (i >= _size)
		throw std::exception();
	return _array[i];
}

template <class Tmp>
void		Array<Tmp>::display(std::ostream& o) const {
	unsigned int i;
	if (_size == 0)
		return;
	for (i = 0; i < _size - 1; i++)
		o << _array[i] << " - ";
	if (i == _size - 1)
		o << _array[i];
}

template <class Tmp>
unsigned int	Array<Tmp>::size() const {
	return (_size);
}

template <class Tmp>
std::ostream&	operator<<(std::ostream& o, Array<Tmp>const& ptr) {
	ptr.display(o);
	return (o);
}
