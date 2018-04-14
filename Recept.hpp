#ifndef RECEPT_HPP_INCLUDED
#define RECEPT_HPP_INCLUDED
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Alapanyag.hpp"
#include "Hozzavalo.hpp"

/**A név és leíráson kívül egy dinamikus tömbben tárolja a recept összetevőit*/
class Recept{
    private:
        std::string nev;
        std::string leiras;
        Hozzavalo* hozzavalok;  /**Hozzavalok tömbje*/
        int db;                 /**Mekkora a tömbök mérete*/
    public:
        Recept();
        Recept(std::string nev,std::string leiras);
        ~Recept();
        Recept(Recept const & r);
        Recept &operator=(Recept const &rhs);
        void hozzaad(Hozzavalo const &uj);
        std::string get_nev() const ;
        std::string get_leiras() const ;
        void set_nev(std::string uj_nev);
        void set_leiras(std::string uj_leiras);
        void info(std::ostream& os);

};



#endif // RECEPT_HPP_INCLUDED
