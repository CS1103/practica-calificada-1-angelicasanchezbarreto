//
// Created by ruben on 9/12/2019.
//

#ifndef POLINOMIO_POLINOMIO_H
#define POLINOMIO_POLINOMIO_H

#include <vector>
using namespace std;

struct Polynomial {
    int coef, exp, size;
    int* lista;

    Polynomial();
    Polynomial(int, int);
    Polynomial(int*, int);
    Polynomial(int, int*);

    //Polynomial(int);
    Polynomial(int num);
    int degree();
    void add(int, int);
    Polynomial operator*(const int);
    Polynomial operator*(const Polynomial&);
    Polynomial& operator=(const Polynomial&);
    Polynomial operator+(const Polynomial&);
    Polynomial operator+=(const Polynomial&);
    friend ostream& operator<<(ostream&, const Polynomial&);

    ~Polynomial();
};

#endif //POLINOMIO_POLINOMIO_H
