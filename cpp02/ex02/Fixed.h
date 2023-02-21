#ifndef Fixed_h
#define Fixed_h

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int					value;
        static const int	fractionalBits = 8;
   public:
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed(int const value);
        Fixed(float const value);
        ~Fixed();
        Fixed& operator=(const Fixed &fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt(void) const;
        float toFloat(void) const;
        Fixed operator+(Fixed const & obj);
        Fixed operator-(Fixed const & obj);
        Fixed operator*(Fixed const & obj);
        Fixed operator/(Fixed const & obj);
        Fixed & operator++();
        Fixed operator++(int);
        Fixed & operator--();
        Fixed operator--(int);
        bool operator<(Fixed const & rhs);
        bool operator>(Fixed const & rhs);
        bool operator>=(Fixed const & rhs);
        bool operator<=(Fixed const & rhs);
        bool operator==(Fixed const & rhs);
        bool operator!=(Fixed const & rhs);
        static Fixed & min(Fixed & a, Fixed & b);
        static Fixed & max(Fixed & a, Fixed & b);
        static Fixed const & min(Fixed const & a, Fixed const & b);
        static Fixed const & max(Fixed const & a, Fixed const & b);



};

std::ostream& operator<<(std::ostream& os,Fixed const & obj);


#endif 