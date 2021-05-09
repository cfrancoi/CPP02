#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _rawbits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const fixe) :  _rawbits(fixe * (1 << _bits))
{

}

Fixed::Fixed(float const fixe)
{
	this->_rawbits = roundf(fixe * (1 << _bits));
}

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

float Fixed::toFlaot(void) const
{
	return((float)(this->getRawBits()) / (1 << _bits));
}

int Fixed::toInt(void) const 
{
	return(this->getRawBits() / ( 1 << _bits));
}

int Fixed::getRawBits() const 
{
	return (this->_rawbits);
}

void Fixed::setRawBits(int const raw) 
{
	this->_rawbits = raw;
}

std::ostream& operator<<(std::ostream & o, Fixed const &src) 
{
	o << src.toFlaot();

	return (o);
}
