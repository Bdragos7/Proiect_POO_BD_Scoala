//
// Created by Dragos on 1/18/2022.
//
#pragma once
#ifndef MAIN_CPP_ELEV_PREGATIRI_H
#define MAIN_CPP_ELEV_PREGATIRI_H
#include<iostream>
#include <string>
#include <memory>
#include "elev.h"
#include "exceptii.h"

class elev_pregatiri : public elev {
private:
    std::string data_preg;
    int durata_preg;
public:
    elev_pregatiri(const std::string &nume, const std::string &clasa, const std::string &adresa,
                   const long int &nrTelefon, const std::string &dataPreg, const int &durataPreg);

    void afisare(std::ostream &os) const override;

    std::shared_ptr<elev> clone() const override;

    void adaugare(int nota);

    virtual ~elev_pregatiri();

    float cal_medie ();

};


#endif //MAIN_CPP_ELEV_PREGATIRI_H
