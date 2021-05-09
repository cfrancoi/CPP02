#ifndef __FIXED_H__
#define __FIXED_H__

class Fixed
{
private:
	int			_rawbits;
	const int	_bits;


public:
	Fixed();
	Fixed(Fixed const & src);
	~Fixed();

	Fixed&	operator=( Fixed const &src);

	int		getRawBits() const;
	void	setRawBits(int const raw);
	
};

#endif // __FIXED_H__