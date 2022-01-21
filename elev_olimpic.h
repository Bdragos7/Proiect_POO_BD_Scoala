//
// Created by Dragos on 1/18/2022.
//

#ifndef MAIN_CPP_ELEV_OLIMPIC_H
#define MAIN_CPP_ELEV_OLIMPIC_H
#include<iostream>
#include <string>
#include <vector>
#include <memory>
#include "elev.h"

class elev_olimpic : public elev{
private:
    std::string olimpiada;
    std::string premiu;
public:

    elev_olimpic(const std::string &nume, const std::string &clasa, const std::string &adresa,
                 const long int &nrTelefon, const std::string &olimpiada, const std::string &premiu);

    void afisare (std::ostream &os) const override;

    std::shared_ptr<elev> clone() const override;

};


#endif //MAIN_CPP_ELEV_OLIMPIC_H
