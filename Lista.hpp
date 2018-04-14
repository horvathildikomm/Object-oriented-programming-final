#ifndef LISTA_HPP_INCLUDED
#define LISTA_HPP_INCLUDED
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Alapanyag.hpp"
#include "Hozzavalo.hpp"
#include "Recept.hpp"


/**iterátoros láncolt lista. Két félére lesz szükség: Receptek és Alapanyagok tárolására.
forrás: http://cppftw.org/jegyzet/fejezet06.html#link5*/
template<typename TIPUS>
class Lista {
    private:
        struct ListaElem {
            ListaElem * kov;
            TIPUS adat;
        };
        ListaElem * eleje;
    public:
        class iterator {
            // ...
        };
        class const_iterator {
            // ...
        };
        iterator begin();
        iterator end();
        const_iterator begin() const;
        const_iterator end() const;

    /*...TOVÁBBI FÜGGVÉNYEK*/
        //hozzáad, töröl, konstruktor(?),...
        //void info(std::ostream os); /**kilistázza az elemeket*/


};


#endif // LISTA_HPP_INCLUDED
