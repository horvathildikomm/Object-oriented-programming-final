#include "Recept.hpp"

/**Konstruktorok*/
Recept::Recept() {}
Recept::Recept(std::string nev,std::string leiras): nev(nev), leiras(leiras),hozzavalok(NULL), db(0) {}
Recept::Recept(Recept const & r){
    nev=r.nev;
    leiras=r.leiras;
    db=r.db;
    for(int i=0;i<db;++i){
        hozzavalok[i]=r.hozzavalok[i];
    }
}
/**Destruktor*/
Recept::~Recept() {delete[] hozzavalok;}
/**Értékadás*/
Recept & Recept::operator=(Recept const &rhs){
    if(this!=&rhs){
        delete[] hozzavalok;
        nev=rhs.nev;
        leiras=rhs.leiras;
        db=rhs.db;
        for(int i=0;i<db;++i){
            hozzavalok[i]=rhs.hozzavalok[i];
        }
    }
    return *this;
}
/**Új hozzavalo hozzáadása a tömbhöz*/
void Recept::hozzaad(Hozzavalo const &uj){
    Hozzavalo* ujhozzavalok= new Hozzavalo[db+1];
    for(int i=0;i<db;++i){
        ujhozzavalok[i]=hozzavalok[i];
    }
    ujhozzavalok[db]=uj;
    ++db;
    delete[] hozzavalok;
    hozzavalok=ujhozzavalok;
}
/**Info*/
void Recept::info(std::ostream& os){
    os<<nev<<std::endl<<leiras<<std::endl;
    for(int i=0;i<db;++i)
        hozzavalok[i].info(os);
}

/**Getterek*/
std::string Recept::get_nev() const {return nev;}
std::string Recept::get_leiras() const {return leiras;}
/**Setterek*/
void Recept::set_nev(std::string uj_nev) {nev=uj_nev;}
void Recept::set_leiras(std::string uj_leiras) {leiras=uj_leiras;}
