//
// Created by Dragos on 1/18/2022.
//

#include "elev_pregatiri.h"


elev_pregatiri::elev_pregatiri(const std::string &nume, const std::string &clasa, const std::string &adresa,
                               const long int &nrTelefon, const std::string &dataPreg, const int &durataPreg) : elev(nume, clasa, adresa,
                                                                                                 nrTelefon),data_preg(dataPreg),durata_preg() {
    if(durata_preg>2)
        throw durata();
}

void elev_pregatiri::afisare(std::ostream &os) const {
    elev_pregatiri::afisare(os);
    os << "Data pregatire: " << data_preg << '\n' << "Durata: " << durata_preg << '\n';

}

std::shared_ptr<elev> elev_pregatiri::clone() const {
    return std::make_shared<elev_pregatiri>(*this);

}


void elev_pregatiri::adaugare(int nota) {
    note_elev.push_back(nota);

}

float elev_pregatiri::cal_medie() {
    int sum = 0;
    for (int i = 0; i < note_elev.size(); i++)
        sum = sum + note_elev[i];
    float medie = (float) sum / note_elev.size();
    return medie;
}

elev_pregatiri::~elev_pregatiri() {

}


