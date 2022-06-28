//
// Created by Dragos on 1/18/2022.
//

#ifndef MAIN_CPP_EXAMEN_H
#define MAIN_CPP_EXAMEN_H

#include <iostream>
#include <string>


template <typename T>
class examen;

template <typename T>
std::ostream& operator<<(std::ostream& os, const examen<T> &examene);

template<typename T>
class examen {
private:
    std::string nume;
    T nota_trecere;
    std::string data_examen;
public:
    examen(const std::string &nume, T notaTrecere, const std::string &dataExamen);

    friend std::ostream &operator<< <>(std::ostream &, const examen<T>&);


};

#endif //MAIN_CPP_EXAMEN_H
