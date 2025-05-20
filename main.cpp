#include <iostream>
#include "Integer.h"

//podpunkt 4
//W tym przypadku jest konieczne, aby funkcja byla zaprzyjaziona z klasa. Funkcja musi miec dostep do pol klasy

void add(Integer& obiekt, int skladnik) {
    obiekt.liczba += skladnik;
}

int main()
{
    //podpunkt 2
    Integer obiektPierwszy;
    Integer obiektDrugi;
    const Integer obiektTrzeci;

    //nie mozna bezposrodnio zmieniac pola prywatnego

    obiektPierwszy.setLiczba(5);
    std::cout << "Wartosc obiektu pierwszego: " << obiektPierwszy.getLiczba() << std::endl;

    obiektDrugi.setLiczba(3);
    std::cout << "Wartosc obiektu drugiego: " << obiektDrugi.getLiczba() << std::endl;

    //pola obiektu const nie moga byc zmieniane, wiec uzycie setLiczba jest niemozliwe

    std::cout << "Wartosc obiektu trzeciego: " << obiektTrzeci.getLiczba() << std::endl;

    //podpunkt 3 i 4

    add(obiektPierwszy, 4);
    std::cout << "Suma: " << obiektPierwszy.getLiczba() << std::endl;

    obiektPierwszy.subtract(3);
    std::cout << "Roznica: " << obiektPierwszy.getLiczba() << std::endl;

    obiektPierwszy.multiply(2);
    std::cout << "Iloczyn: " << obiektPierwszy.getLiczba() << std::endl;

    return 0;
}
