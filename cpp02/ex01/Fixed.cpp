#include "Fixed.h"

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    if(this != &fixed)
        *this = fixed;
}

Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = value << fractionalBits;
}

Fixed::Fixed(float const value)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << fractionalBits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignation operator called" << std::endl;
    this->value = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called value = " <<  value << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

int Fixed::toInt(void) const
{
    return value >> this->fractionalBits;
}

float Fixed::toFloat(void) const
{
    return (float)value / (1 << this->fractionalBits);
}


std::ostream& operator<<(std::ostream& os,Fixed const & obj)
{
    
    os << obj.toFloat();
    return os;
}











// Default constructor called
// Int constructor called
// Float constructor called
// Copy constructor called
// Copy assignment operator called
// Float constructor called
// Copy assignment operator called
// Destructor called
// a is 1234.43
// b is 10
// c is 42.4219
// d is 10
// a is 1234 as integer
// b is 10 as integer
// c is 42 as integer
// d is 10 as integer
// Destructor called
// Destructor called
// Destructor called
// Destructor called
// $>