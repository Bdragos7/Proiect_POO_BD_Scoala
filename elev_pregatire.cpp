//
// Created by Dragos on 1/18/2022.
//

#include "elev_pregatire.h"


elev_pregatire::elev_pregatire(const std::string &nume, const std::string &clasa, const std::string &adresa,
                               const long int &nrTelefon, const std::string &dataPreg, const int &durataPreg) : elev(nume, clasa, adresa,
                                                                                                 nrTelefon),data_preg(dataPreg),durata_preg() {
    if(durata_preg>2)
        throw durata_error();
}

void elev_pregatire::afisare (std::ostream &os) const {
    elev_pregatire::afisare(os);
    os <<"Data pregatire: " << data_preg << '\n' << "Durata: " << durata_preg << '\n';

}

std::shared_ptr<elev> elev_pregatire::clone() const {
    return std::make_shared<elev_pregatire>(*this);

}


void elev_pregatire::adaugare(int nota) {
    note_elev.push_back(nota);

}

float elev_pregatire::cal_medie() {
    int sum = 0;
    for (int i = 0; i < note_elev.size(); i++)
        sum = sum + note_elev[i];
    float medie = (float) sum / note_elev.size();
    return medie;
}

elev_pregatire::~elev_pregatire() {

}


