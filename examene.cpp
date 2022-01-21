//
// Created by Dragos on 1/18/2022.
//

#include "examene.h"

template<typename T>
examene<T>::examene(const std::string &nume, T notaTrecere, const std::string &dataExamen) : nume(nume),
                                                                                            nota_trecere(notaTrecere),
                                                                                            data_examen(dataExamen) {}
template<typename T>
std::ostream &operator<<(std::ostream &os, const examene<T> &examene) {
    os << "nume: " << examene.nume << " nota_trecere: " << examene.nota_trecere << " data_examen: "
       << examene.data_examen;
    return os;



}
