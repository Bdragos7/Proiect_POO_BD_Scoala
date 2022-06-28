//
// Created by Dragos on 1/18/2022.
//

#include "elev.h"

std::ostream &operator<<(std::ostream &os, const elev &elev) {
    os<<"Nume: "<<elev.nume<<" ,Clasa: "<<elev.clasa<<",Adresa: "<<elev.adresa<<" ,Numar telefon: "<<elev.nr_telefon;
    return os;
}

elev::elev(const std::string &nume, const std::string &clasa, const std::string &adresa, const long int &nrTelefon)
        : nume(nume), clasa(clasa), adresa(adresa), nr_telefon(nrTelefon) {

    if(nr_telefon >= 9999999999)
        throw telefon_error();
}

const std::string &elev::getNume() const {
    return nume;
}

void elev::setNume(const std::string &nume) {
    elev::nume = nume;
}




elev::~elev() {

}

void elev::afisare(std::ostream &os) const {
    elev::afisare(os);
    os<<" Nume: "<<nume<<'\n'<<" ,Clasa "<<clasa<<" ,Adresa: "<<adresa<<" ,Numar telefon: "<<nr_telefon<<'\n';

}


