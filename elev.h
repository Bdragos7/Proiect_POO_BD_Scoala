//
// Created by Dragos on 1/18/2022.
//

#ifndef MAIN_CPP_ELEV_H
#define MAIN_CPP_ELEV_H

#include<iostream>
#include <string>
#include <vector>
#include <memory>



class elev {
protected:
    std::string nume;
    std::string clasa;
    std::string adresa;
    std::string nr_telefon;
    std::vector<int> note_elev;

public:
    elev(const std::string &nume, const std::string &clasa, const std::string &adresa, const std::string &nrTelefon);

    friend std::ostream &operator<<(std::ostream &os, const elev &elev);

    const std::string &getNume() const;

    void setNume(const std::string &nume);

    virtual void afisare(std::ostream &os) const;

    virtual std::shared_ptr<elev> clone() const=0;



    virtual ~elev();
};


#endif //MAIN_CPP_ELEV_H