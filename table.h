//
// Created by Dragos on 1/21/2022.
//

#ifndef MAIN_CPP_TABLE_H
#define MAIN_CPP_TABLE_H
#include <istream>
#include <string>
#include <ostream>


class table {

    std::string culoare;
    std::string tip_tabla;
    int diametru;


public:

    table(const std::string &culoare, const std::string &tipTabla, int diametru);

    friend std::ostream &operator<<(std::ostream &os, const table &table);
};

class table_factory {
public:
    static table tabla_normala() { return table("neagra", "normala", 200); }
    static table tabla_inteligenta() { return table("alba","moderna", 150); }
};


#endif //MAIN_CPP_TABLE_H
