// ! revisar código por que falta agregar "mcm" y solicitar el numerador y denominador
// ! también solicitar si es una fracción mixta
// ! falta agregar notas para entender el código
#include <iostream>

using namespace std;

struct Fraccion {
    int numerador;
    int denominador;
};

Fraccion sumarFracciones(Fraccion f1, Fraccion f2) {
    int denominadorComun = f1.denominador * f2.denominador;
    int numeradorResultante = f1.numerador * f2.denominador + f2.numerador * f1.denominador;
    return Fraccion{numeradorResultante, denominadorComun};
}

Fraccion restarFracciones(Fraccion f1, Fraccion f2) {
    int denominadorComun = f1.denominador * f2.denominador;
    int numeradorResultante = f1.numerador * f2.denominador - f2.numerador * f1.denominador;
    return Fraccion{numeradorResultante, denominadorComun};
}

int main() {
    Fraccion f1 = {1, 2}; // 1/2
    Fraccion f2 = {1, 3}; // 1/3

    Fraccion suma = sumarFracciones(f1, f2);
    cout << "La suma es: " << suma.numerador << "/" << suma.denominador << endl;

    Fraccion resta = restarFracciones(f1, f2);
    cout << "La resta es: " << resta.numerador << "/" << resta.denominador << endl;

    return 0;
}
