//
// Created by Dragos on 1/21/2022.
//

#include "laborator_info.h"

std::ostream &operator<<(std::ostream &os, const laborator_info &info) {
    os << "nr_calculatoare: " << info.nr_calculatoare << " nr_scaune: " << info.nr_scaune << " nr_birouri: "
       << info.nr_birouri;
    return os;
}

laboratoare_info_builder laboratoare_info_builder::nr_calculatoare(int nr) {
    d.nr_calculatoare = nr;
    return *this;
}

laboratoare_info_builder &laboratoare_info_builder::nr_birouri(int nr) {
    d.nr_birouri = nr;
    return *this;
}

laboratoare_info_builder &laboratoare_info_builder::nr_scaune(int nr) {
    d.nr_scaune = nr;
    return *this;
}
