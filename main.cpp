#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "elev.h"
#include "scoala.h"
#include "examen.h"
#include "elev_pregatire.h"
#include "elev_erasmus.h"
#include "laborator_info.h"
#include "table.h"
#include "elev_olimpic.h"

int main() {

    try {
        elev_pregatire e1{"Bora Dragos", "clasa a 10 a", "bucuresti grozavesti caminA", 1987654321, "10.12.2022", 1};
        elev_pregatire e2{"Alexandru Mihai", "clasa a 11 a", "bucuresti grozavesti caminC", 1789654321, "11.12.2022",
                          2};
        elev_pregatire e3{"Iustinian al 2 lea", "clasa a 12 a", "bucuresti grozavesti caminD", 1897654321, "12.12.2022",
                          1};
        elev_erasmus e4{"Maria Antoaneta", "clasa a 11 a", "bucuresti grozavesti camin A1", 1234567899, "Franta",
                        "Anglia"};
        elev_olimpic e5{"Ioan Alexadru","clasa a 12 a","bucuresti grozavesti caminB",1234567888 ,"Informatica","Mentiune"};

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
        scl_2.adaug_erasmus(e4);
        scl_3.adaug_olimpic(e5);


        std::cout << e1.cal_medie() << '\n';
        scl_1.alfabetic_p();
        scl_1.afisare_p(std::cout);
        scl_2.alfabetic_e();
        scl_2.afisare_e(std::cout);
        scl_3.alfabetic_o();
        scl_3.afisare_o(std::cout);


    }

    catch (exceptie &error){
        std::cout<<error.what()<<'\n';
    }

    laboratoare_info_builder b;
    laborator_info d = b.nr_calculatoare(20).nr_birouri(20).nr_scaune(20).build();

    table p1 = table_factory::tabla_normala();
    table p2 = table_factory::tabla_inteligenta();


    examen<double> exam1= examen<double> ("POO",4.5,"4.02.2022");
    examen<int> exam2= examen<int> ("SDA",5,"28.01.2022");
    examen<int> exam3= examen<int> ("BD",5,"1.02.2022");


    return 0;
}


