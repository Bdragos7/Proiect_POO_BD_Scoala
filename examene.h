//
// Created by Dragos on 1/18/2022.
//

#ifndef MAIN_CPP_EXAMENE_H
#define MAIN_CPP_EXAMENE_H

#include <iostream>
#include <string>

class examene {
private:
    std::string nume;
    int nota_trecere;
    std::string data_examen;
public:
    examene(const std::string &nume, int notaTrecere, const std::string &dataExamen);

    friend std::ostream &operator<<(std::ostream &os, const examene &examene);

};

#endif //MAIN_CPP_EXAMENE_H
