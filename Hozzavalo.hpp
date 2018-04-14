#ifndef HOZZAVALO_HPP_INCLUDED
#define HOZZAVALO_HPP_INCLUDED
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Alapanyag.hpp"

/**Egy konkrét receptben egy hozzávaló áll egy alapanyagból és
 hogy mekkora mennyiségre van szükség belőle az adott recepthez.*/
class Hozzavalo{
    private:
        Alapanyag hozzavalo;
        double mennyiseg;
    public:
        Hozzavalo();
        Hozzavalo(Alapanyag hozzavalo, double mennyiseg);
        Alapanyag get_hozzavalo() const;
        double get_mennyiseg() const;
        void info(std::ostream& os) const;
};



#endif // HOZZAVALO_HPP_INCLUDED
