#include <complex>
#include <iostream>
using namespace std;

int main(){
    complex<double> c1(1.5, 2.0);
    complex<double> c2(-1.5, 0.5);
    complex<double> c3;
    c3 = c1 + c2;
    printf("c3 = %.2f%+.2fi\n", c3.real(), c3.imag());
    c3 = (1.0) / c2;
    printf("1/c2 = %.2f%+.2fi\n", c3.real(), c3.imag());
    c3 = sqrt(c1);
    printf("Raíz cuadrada de c1 = %.2f%+.2fi\n", c3.real(), c3.imag());
}
