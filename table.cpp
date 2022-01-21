//
// Created by Dragos on 1/21/2022.
//

#include "table.h"

std::ostream &operator<<(std::ostream &os, const table &table) {
    os << "culoare: " << table.culoare << " tip_tabla: " << table.tip_tabla << " diametru: " << table.diametru;
    return os;
}

table::table(const std::string &culoare, const std::string &tipTabla, int diametru) : culoare(culoare),
                                                                                      tip_tabla(tipTabla),
                                                                                      diametru(diametru) {}
