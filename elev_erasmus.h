//
// Created by Dragos on 1/18/2022.
//

#ifndef MAIN_CPP_ELEV_ERASMUS_H
#define MAIN_CPP_ELEV_ERASMUS_H


#include "elev.h"
#include <iostream>
#include <string>
#include <memory>

class elev_erasmus : public elev{
private:
    std::string nationalitate;
    std::string tara_provenienta;//tara de unde este scoala din care se face schimbul
public:
    elev_erasmus(const std::string &nume, const std::string &clasa, const std::string &adresa,
                 const std::string &nrTelefon, const std::string &nationalitate, const std::string &taraProvenienta);

    void afisare(std::ostream &os) const override;

    std::shared_ptr<elev> clone() const override;
};


#endif //MAIN_CPP_ELEV_ERASMUS_H
