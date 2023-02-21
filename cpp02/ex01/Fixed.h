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

};

std::ostream& operator<<(std::ostream& os,Fixed const & obj);

#endif 