#ifndef POOII_INTEGER_H
#define POOII_INTEGER_H

#include "tipos.h"

class Integer {
    int value;
public:
    Integer();
    Integer(int value);
    Integer(const Integer& other);
    Integer operator=(const Integer& other);
    Integer operator+(int value);
    operator int();
    friend std::ostream& operator <<(std::ostream& os, const Integer& other);
    friend std::istream& operator >>(std::istream& os, Integer& other);
    Integer operator^(int value);
};


#endif //POOII_INTEGER_H
