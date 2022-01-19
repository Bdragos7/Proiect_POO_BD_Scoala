//
// Created by Dragos on 1/18/2022.
//

#ifndef MAIN_CPP_SCOALA_H
#define MAIN_CPP_SCOALA_H

#include<iostream>
#include <string>
#include <algorithm>
#include "elev_pregatiri.h"
#include <memory>


class scoala{
private:

    std::string nume;
    std::string director;
    std::vector<elev_pregatiri> elevi;

public:
    scoala(const std::string &nume, const std::string &director);

    scoala(const scoala& copie);

    scoala& operator=(const scoala& copie);

    friend std::ostream &operator<<(std::ostream &os, const scoala &scoala);

    void alfabetic ();

    void adaug(elev_pregatiri elev_pregatiri){
        elevi.push_back(elev_pregatiri);
    }

    void afisare (std::ostream &os);
    virtual ~scoala();
};


#endif //MAIN_CPP_SCOALA_H
