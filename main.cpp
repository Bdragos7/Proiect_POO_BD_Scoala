#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "elev.h"
#include "scoala.h"
#include "examene.h"
#include "elev_pregatiri.h"
#include "elev_erasmus.h"


int main() {

    elev_pregatiri e1{"Bora Dragos","clasa a 10 a","bucuresti grozavesti caminA","0987654321","10.12.2022","2h"};
    elev_pregatiri e2{"Mike Oxlong","clasa a 11 a","bucuresti grozavesti caminC","0789654321","11.12.2022","2h"};
    elev_pregatiri e3{"Iustinian al 2 lea","clasa a 12 a","bucuresti grozavesti caminD","0897654321","12.12.2022","2h"};
    elev_erasmus e4{"Maria Antoaneta","clasa a 11 a","bucuresti grozavesti camin A1","1234567899","Franta","Anglia"};

    scoala scl_1{"Liceul Carol", "Marian Ciuperca"};
    scoala scl_2{"Liceul Fratii Buzesti", "Mihai Ionita"};
    scoala scl_3{"Liceul Independenta", "Popa Adrian"};


    e1.adaugare(10);
    e1.adaugare(7);
    e1.adaugare(8);
    e1.adaugare(10);

    scl_1.adaug(e1);
    scl_1.adaug(e2);
    scl_1.adaug(e3);


    std::cout<< e1.cal_medie()<<'\n';
    scl_1.alfabetic();
    scl_1.afisare(std::cout);




}

