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

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignation operator called" << std::endl;
    this->value = fixed.value;
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called value = " << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

void Fixed::setRawBits(float const raw)
{
    value = roundf(raw * (1 << fractionalBits));
}