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

void scoala::alfabetic_p() {

    std::sort(elev_p.begin(),elev_p.end(),[](auto &E1,auto &E2){return E1.getNume()<E2.getNume();});
}
void scoala::alfabetic_e() {

    std::sort(elev_e.begin(),elev_e.end(),[](auto &E1,auto &E2){return E1.getNume()<E2.getNume();});
}
void scoala::alfabetic_o() {

    std::sort(elev_o.begin(),elev_o.end(),[](auto &E1,auto &E2){return E1.getNume()<E2.getNume();});
}

scoala::~scoala() {

}

void scoala::afisare_p(std::ostream &os) {
    for(int i=0;i<elev_p.size();i++)
        std::cout<<elev_p[i]<<'\n';
}
void scoala::afisare_e(std::ostream &os) {
    for(int i=0;i<elev_e.size();i++)
        std::cout<<elev_e[i]<<'\n';
}
void scoala::afisare_o(std::ostream &os) {
    for(int i=0;i<elev_o.size();i++)
        std::cout<<elev_o[i]<<'\n';
}
