#ifndef ALAPANYAG_HPP_INCLUDED
#define ALAPANYAG_HPP_INCLUDED
#include <iostream>
#include <string.h>
#include <stdlib.h>


/**A recepthez szükséges hozzávalók alapanyagokból építhetőek fel,
de alapanyag önmagában is létezhet recept nélkül*/
class Alapanyag{
    private:
        std::string nev;             /**Alapanyag neve*/
        std::string mertekegyseg;    /**Alapanyag mértékegysége*/
    public:
        Alapanyag(std::string nev="", std::string mertekegyseg="");
        std::string get_nev() const;
        std::string get_mertekegyseg() const;
        void set_nev(std::string uj_nev);
        void set_mertekegyseg(std::string uj_mertekegyseg);
        void info(std::ostream& os) const;
};



#endif // ALAPANYAG_HPP_INCLUDED
