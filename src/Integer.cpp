#include "Integer.h"
#include <iostream>

Integer::Integer()
{
    std::cout << "Utworzono obiekt klasy Integer" << std::endl;
}

int Integer::getLiczba() const{
    return liczba;
}

void Integer::setLiczba(int nowaLiczba){
    liczba = nowaLiczba;
}

void Integer::subtract(int odejmnik){
    liczba -= odejmnik;
}

void Integer::multiply(int czynnik) {
    liczba *= czynnik;
}
