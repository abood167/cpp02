#include "Fixed.h"

#include <iostream>
int main( void ) {
Fixed a;
Fixed e;
Fixed b(a);
Fixed c;
c = b;
e.setRawBits(52);
std::cout << a.getRawBits()<< std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
std::cout << e.getRawBits() << std::endl;
return 0;
}


