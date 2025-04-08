#include <complex>
#include <iostream>
using namespace std;

int main(){
    complex c1(1.5, 2.0); // También se puede usar complex<double> c1(1.5, 2.0);
    complex c2(-1.5, 0.5);
    complex c3(0.0, 0.0); // También se puede usar complex<double> c3; Sin valores iniciales
    c3 = c1 + c2;
    printf("c3 = %.2f%+.2fi\n", c3.real(), c3.imag());
    c3 = 1.0 / c2;
    printf("1/c2 = %.2f%+.2fi\n", c3.real(), c3.imag());
    c3 = sqrt(c1);
    printf("Raíz cuadrada de c1 = %.2f%+.2fi\n", c3.real(), c3.imag());
}
