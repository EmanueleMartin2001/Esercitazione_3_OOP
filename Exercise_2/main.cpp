/* LEGENDA
 * 1)definire <<
 * 2)definire +
 * 3)definire ==
 * 4)definire la funzione conjugate
 * */

#include <iostream>
#include "ComplexNumber.hpp"

using namespace complex;
using namespace std;

int main()
{
    //definizione primo numero complesso
    double a = 1;
    double b = -2;
    //definizione secondo numero complesso
    double c = 1;
    double d = -2;

    ComplexNumber x1 = ComplexNumber(a,b);
    ComplexNumber x2 = ComplexNumber(c,d);
    cout << "il primo numero complesso: " << x1 << "e il suo coniugato e': " << x1.conjugate()  <<  endl;
    cout << "il secondo numero complesso: " << x2 << "e il suo coniugato e': " << x2.conjugate()  <<  endl;
    cout << "la somma dei due numeri complessi  e': " << x1+x2 << endl;
    cout << "i due numeri sono uguali? (true=1, false=0)" << (x1==x2) << endl;

    return 0;
}
