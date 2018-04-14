#include "Hozzavalo.hpp"

/**Konstruktorok*/
Hozzavalo::Hozzavalo() {}
Hozzavalo::Hozzavalo(Alapanyag hozzavalo, double mennyiseg) : hozzavalo(hozzavalo), mennyiseg(mennyiseg) {}
/**Getterek*/
Alapanyag Hozzavalo::get_hozzavalo() const {return hozzavalo;}
double Hozzavalo::get_mennyiseg() const {return mennyiseg;}
/**Info*/
void Hozzavalo::info(std::ostream& os) const {os<< hozzavalo.get_nev() <<", "<< mennyiseg << " " << hozzavalo.get_mertekegyseg(); }
