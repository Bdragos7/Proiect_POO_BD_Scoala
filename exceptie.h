//
// Created by Dragos on 1/21/2022.
//

#ifndef MAIN_CPP_EXCEPTIE_H
#define MAIN_CPP_EXCEPTIE_H
#include <iostream>
#include <stdexcept>

class exceptie: public std::runtime_error {
public:
    exceptie(const std::string &arg );
};

class durata_error: public exceptie{
public:
    durata_error();
};

class telefon_error: public exceptie{
public:
    telefon_error();
};

#endif //MAIN_CPP_EXCEPTIE_H
