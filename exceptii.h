//
// Created by Dragos on 1/21/2022.
//

#ifndef MAIN_CPP_EXCEPTII_H
#define MAIN_CPP_EXCEPTII_H
#include <iostream>
#include <stdexcept>

class exceptii: public std::runtime_error {
public:
    exceptii(const std::string &arg );
};

class durata: public exceptii{
public:
    durata();
};

class telefon: public exceptii{
public:
    telefon();
};

#endif //MAIN_CPP_EXCEPTII_H
