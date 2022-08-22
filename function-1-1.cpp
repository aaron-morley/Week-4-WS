// function-1-1.cpp

#include <iostream>
using namespace std;

int *t = new int;

int size_of_variable_star_t() {
        return sizeof(*t);
    }