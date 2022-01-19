//
// Created by Dragos on 1/18/2022.
//

#include "examene.h"

examene::examene(const std::string &nume, int notaTrecere, const std::string &dataExamen) : nume(nume),
                                                                                            nota_trecere(notaTrecere),
                                                                                            data_examen(dataExamen) {}

std::ostream &operator<<(std::ostream &os, const examene &examene) {
    os << "nume: " << examene.nume << " nota_trecere: " << examene.nota_trecere << " data_examen: "
       << examene.data_examen;
    return os;



}
