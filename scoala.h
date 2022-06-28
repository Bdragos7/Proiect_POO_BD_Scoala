//
// Created by Dragos on 1/18/2022.
//

#ifndef MAIN_CPP_SCOALA_H
#define MAIN_CPP_SCOALA_H

#include<iostream>
#include <string>
#include <algorithm>
#include "elev_pregatire.h"
#include "elev_erasmus.h"
#include "elev_olimpic.h"
#include <memory>


class scoala{
private:

    std::string nume;
    std::string director;
    std::vector<elev_pregatire> elev_p;
    std::vector<elev_erasmus> elev_e;
    std::vector<elev_olimpic>elev_o;


public:
    scoala(const std::string &nume, const std::string &director);

    scoala(const scoala& copie);

    scoala& operator=(const scoala& copie);

    friend std::ostream &operator<<(std::ostream &os, const scoala &scoala);

    void alfabetic_p ();
    void alfabetic_e ();
    void alfabetic_o ();

    void adaug(elev_pregatire elevPregatire){
        elev_p.push_back(elevPregatire);
    }

    void adaug_erasmus(elev_erasmus elevErasmus) {
        elev_e.push_back(elevErasmus);
    }

    void adaug_olimpic(elev_olimpic elevOlimpic) {
        elev_o.push_back(elevOlimpic);
    }

    void afisare_p (std::ostream &os);
    void afisare_e (std::ostream &os);
    void afisare_o (std::ostream &os);
    virtual ~scoala() ;
};


#endif //MAIN_CPP_SCOALA_H
