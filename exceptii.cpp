//
// Created by Dragos on 1/21/2022.
//

#include "exceptii.h"


exceptii::exceptii(const std::string &arg ): runtime_error (arg){}

durata::durata() : exceptii("Nu avem o pregatire mai lunga de 2h"){}

telefon::telefon() : exceptii("Un numar de telefon are fix 10 cifre"){}