#ifndef __FIXED_H__
#define __FIXED_H__
#include <ostream>

class Fixed
{
private:
	int					_rawbits;
	static const int	_bits = 8;


public:
	Fixed();
	Fixed(int const fixe);
	Fixed(float const fixe);
	Fixed(Fixed const & src);
	~Fixed();

	Fixed&	operator=( Fixed const &src);
	
	float	toFlaot(void) const;
	int		toInt(void) const;

	int		getRawBits() const;
	void	setRawBits(int const raw);

};

std::ostream&	operator<<(std::ostream & o,  Fixed const &src);

#endif // __FIXED_H__