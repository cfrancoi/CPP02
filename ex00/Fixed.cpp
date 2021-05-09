#include "Fixed.hpp"
#include <iostream>

Fixed::~Fixed()
{
 std::cout << "Destructor Called" << std::endl;
}

Fixed& Fixed::operator=( Fixed const & src) 
{
	std::cout << "Assignation constructor called" << std::endl;
	this->_rawbits = src.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const 
{
	std::cout << "getRawBits member function Called" << std::endl;
	return (this->_rawbits);
}

void Fixed::setRawBits(int const raw) 
{
	std::cout << "setRawBits member function Called" << std::endl;
	this->_rawbits = raw;
}

Fixed::Fixed() : _rawbits(0) , _bits(8)
{
	std::cout << "Default constructor called" << std::endl;
	(void)_bits;
}

Fixed::Fixed(Fixed const & src) : _bits(8)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
