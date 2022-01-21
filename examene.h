//
// Created by Dragos on 1/18/2022.
//

#ifndef MAIN_CPP_EXAMENE_H
#define MAIN_CPP_EXAMENE_H

#include <iostream>
#include <string>


template <typename T>
class examene;

template <typename T>
std::ostream& operator<<(std::ostream& os, const examene<T> &examene);

template<typename T>
class examene {
private:
    std::string nume;
    T nota_trecere;
    std::string data_examen;
public:
    examene(const std::string &nume, T notaTrecere, const std::string &dataExamen);

    friend std::ostream &operator<< <>(std::ostream &, const examene<T>&);


};

#endif //MAIN_CPP_EXAMENE_H
