#include "ComplexNumber.hpp"

using namespace std;
namespace complex
{

ostream& operator<<(ostream &os, const ComplexNumber &x) //1)
{
    double a = x.real;
    double b = x.imaginary;
    if (b >= 0){
        os << a << "+" << b << "i" << endl;
        return os;
    }
    os << a << "-" << -b << "i" << endl;
    return os;
}

ComplexNumber operator+(ComplexNumber &x1, ComplexNumber &x2) //2)
{
    double a1 = x1.real; double b1 = x1.imaginary;
    double a2 = x2.real; double b2 = x2.imaginary;
    ComplexNumber x = ComplexNumber(a1+a2,b1+b2);
    return x;
}

bool operator==(ComplexNumber &x1, ComplexNumber &x2) //3)
{
    double a1 = x1.real; double b1 = x1.imaginary;
    double a2 = x2.real; double b2 = x2.imaginary;
    if (a1 == a2 && b1 == b2){
        return true;
        }
    return false;
}

ComplexNumber conjugate(ComplexNumber &x) //4
{
    double a = x.real;
    double b = x.imaginary;
    return ComplexNumber(a,-b);
}

}
