#ifndef __ComplexNumber_H // Header guards
#define __ComplexNumber_H

#include <iostream>

using namespace std;
namespace complex{

struct ComplexNumber
{
    double real;
    double imaginary;

    ComplexNumber(double a, double b): //sto richiamando il costruttore inizializzando real con a e imaginary con b
        real(a),
        imaginary(b)
    {}
    ComplexNumber() = default; //con questo chiamo il csotruttore di default e prevengo problemi se quando dichiaro un complesso non lo inizializzo

    //la funzione coniugata è applicata ai complessi, dunque la creo qua come metodo
    ComplexNumber conjugate () //4)
    {
        return ComplexNumber(real,-imaginary);
    }

};

ostream& operator<<(ostream &os, const ComplexNumber &c); //1)
ComplexNumber operator+(ComplexNumber &x1, ComplexNumber &x2); //2)
bool operator ==(ComplexNumber &x1, ComplexNumber &x2); //3)

}

#endif
