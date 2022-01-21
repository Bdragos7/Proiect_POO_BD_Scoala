//
// Created by Dragos on 1/18/2022.
//

#include "elev_olimpic.h"

elev_olimpic::elev_olimpic(const std::string &nume, const std::string &clasa, const std::string &adresa,
                           const long int &nrTelefon, const std::string &olimpiada, const std::string &premiu)
        : elev(nume, clasa, adresa, nrTelefon), olimpiada(olimpiada), premiu(premiu) {}

void elev_olimpic::afisare(std::ostream &os) const {
    elev::afisare(os);
    os<<"Olimpiada: "<<olimpiada<<'\n'<<"Premiu: "<<premiu<<'\n';
}

std::shared_ptr<elev> elev_olimpic::clone() const {
    return std::shared_ptr<elev>();
}
