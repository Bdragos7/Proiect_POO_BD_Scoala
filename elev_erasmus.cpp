//
// Created by Dragos on 1/18/2022.
//

#include "elev_erasmus.h"

elev_erasmus::elev_erasmus(const std::string &nume, const std::string &clasa, const std::string &adresa,
                           const std::string &nrTelefon, const std::string &nationalitate,
                           const std::string &taraProvenienta) : elev(nume, clasa, adresa, nrTelefon),
                                                                 nationalitate(nationalitate),
                                                                 tara_provenienta(taraProvenienta) {}

void elev_erasmus::afisare(std::ostream &os) const {
    elev::afisare(os);
    os<<" Nationalitate: "<<nationalitate<<'\n'<<"Tara Provenienta: "<<tara_provenienta<<'\n';
}

std::shared_ptr<elev> elev_erasmus::clone() const {
    return std::make_shared<elev_erasmus>(*this);
}


