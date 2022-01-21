//
// Created by Dragos on 1/21/2022.
//

#include "examene.cpp"

template class examene<int>;
template class examene<double>;

template
std::ostream& operator << <>(std::ostream& os, const examene<int>& x);

template
std::ostream& operator << <>(std::ostream& os, const examene<double>& x);