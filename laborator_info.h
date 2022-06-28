//
// Created by Dragos on 1/21/2022.
//

#ifndef MAIN_CPP_LABORATOR_INFO_H
#define MAIN_CPP_LABORATOR_INFO_H
#include <iostream>
#include <string>

class laborator_info {
    int nr_calculatoare;
    int nr_scaune;
    int nr_birouri;
    friend class laboratoare_info_builder;
public:
    laborator_info() = default;

    friend std::ostream &operator<<(std::ostream &os, const laborator_info &info);
};

class laboratoare_info_builder {
private:
    laborator_info d;
public:
    laboratoare_info_builder() = default;

    laboratoare_info_builder nr_calculatoare(int nr);

    laboratoare_info_builder& nr_birouri(int nr);

    laboratoare_info_builder& nr_scaune(int nr);

    laborator_info build() {
        return d;
    }
};




#endif //MAIN_CPP_LABORATOR_INFO_H
