//
// Created by Dragos on 1/18/2022.
//

#include "scoala.h"
#include "elev.h"

scoala::scoala(const std::string &nume, const std::string &director) : nume(nume), director(director) {}

scoala::scoala(const scoala &copie) {
    this->nume = copie.nume;
    this->director = copie.director;
}

scoala &scoala::operator=(const scoala &copie) {
    this->nume = copie.nume;
    this->director = copie.director;

    return *this;
}

std::ostream &operator<<(std::ostream &os, const scoala &scoala) {
    os<<"Nume: "<< scoala.nume<<" Director: "<<scoala.director;
    return os;
}

void scoala::alfabetic() {

    std::sort(elevi.begin(),elevi.end(),[](auto &E1,auto &E2){return E1.getNume()<E2.getNume();});
}




scoala::~scoala() {

}

void scoala::afisare(std::ostream &os) {
    for(int i=0;i<elevi.size();i++)
        std::cout<<elevi[i]<<'\n';
}
