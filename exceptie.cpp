//
// Created by Dragos on 1/21/2022.
//

#include "exceptie.h"


exceptie::exceptie(const std::string &arg ): runtime_error (arg){}

durata_error::durata_error() : exceptie("Nu avem o pregatire mai lunga de 2h"){}

telefon_error::telefon_error() : exceptie("Un numar de telefon are fix 10 cifre"){}