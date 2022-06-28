//
// Created by Dragos on 1/21/2022.
//

#include "examen.cpp"

template class examen<int>;
template class examen<double>;

template
std::ostream& operator << <>(std::ostream& os, const examen<int>& x);

template
std::ostream& operator << <>(std::ostream& os, const examen<double>& x);