#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Alapanyag.hpp"

/**Konstruktor*/
Alapanyag::Alapanyag(std::string nev, std::string mertekegyseg) : nev(nev), mertekegyseg(mertekegyseg) {}
/**Getterek*/
std::string Alapanyag::get_nev() const {return nev;}
std::string Alapanyag::get_mertekegyseg() const {return mertekegyseg;}
/**Setterek*/
void Alapanyag::set_nev(std::string uj_nev) { nev=uj_nev;}
void Alapanyag::set_mertekegyseg(std::string uj_mertekegyseg) { mertekegyseg=uj_mertekegyseg;}
/**Info*/
void Alapanyag::info(std::ostream& os) const {os << "név: " << nev <<", " << "mértékegység: " << mertekegyseg;}

