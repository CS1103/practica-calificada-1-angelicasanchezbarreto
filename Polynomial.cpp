//
// Created by rudri on 9/12/2019.
//

#include <stdexcept>
#include <iostream>
#include "Polynomial.h"

using namespace std;

Polynomial::Polynomial() {
}

int Polynomial::degree() {
    return size;
}

Polynomial::Polynomial(int coef, int exp) {
    this->coef;
    this->exp;
}

Polynomial::Polynomial(int *lista, int size) {
    lista = nullptr;
    lista = 0;
}


void Polynomial::add(int coef, int exp) {
    int *temp = new int[size + 1];
    for(int i = 0; i < size; ++i)
        temp[i] = lista[i];
    delete [] lista;
    lista = temp;
    lista[size] = (coef, exp);
    size++;
}


Polynomial::Polynomial(int) {
    lista = new int[size];
}


Polynomial Polynomial::operator+(const Polynomial & Pol) {

    return Polynomial(coef+Pol.coef, exp+Pol.exp);
}

Polynomial Polynomial::operator+=(const Polynomial &) {
    return Polynomial();
}

ostream& operator<<(ostream& os, const Polynomial & Pol) {
    os << Pol.coef << Pol.exp;
    return os;
}

Polynomial& Polynomial::operator=(const Polynomial & Pol) {
    if(this->size!=0){
        delete[] this->lista;
    }
    this->size = Pol.size;
    this->lista = new int[this->size];
    for(int i = 0; i < this->size; i++){
        this->lista[i] = Pol.lista[i];
    }
    return *this;
}

Polynomial::Polynomial(int num) {

}

Polynomial Polynomial::operator*(const int num) {
    int *lista = new int[size+1];
    for (int i = 0; i < size+1; i++){
        lista[i] = this->coef * num;
    }

    return lista;
}

Polynomial Polynomial::operator*(const Polynomial & Pol) {

}

Polynomial::Polynomial(int exp, int *lista) {

}








Polynomial::~Polynomial() {

}








