// ? revisar código por que falta agregar "mcm" y solicitar el numerador y denominador
// ! también solicitar si es una fracción mixta, propia o impropia
// ! falta agregar notas para entender el código
#include <iostream>

using namespace std;

// mcm es el mínimo común múltiplo, se usa para simplificar fracciones
int mcm(int a, int b)
{
    for (int i = 1;; ++i)
    {
        if (a * i % b == 0)
        {
            return a * i;
            break;
        }
    }
}

// "struct" es una estructura de datos que nos permite almacenar una colección de variables del mismo tipo bajo un solo nombre
struct Fraccion
{
    int numerador;
    int denominador;
    
};
//! REVISAR LAS FUNCIONES PORQUE NO DAN EL RESULTADO ESPERADO
Fraccion sumarFracciones(Fraccion f1, Fraccion f2)
{
    int denominadorComun = f1.denominador * f2.denominador;
    int numeradorResultante = f1.numerador * f2.denominador + f2.numerador * f1.denominador;
    return Fraccion{numeradorResultante, denominadorComun};
}

Fraccion restarFracciones(Fraccion f1, Fraccion f2)
{
    int denominadorComun = f1.denominador * f2.denominador;
    int numeradorResultante = f1.numerador * f2.denominador - f2.numerador * f1.denominador;
    return Fraccion{numeradorResultante, denominadorComun};
}
/*
Fraccion multiplicarFracciones(Fraccion f1, Fraccion f2)
{
    return Fraccion{f1.numerador * f2.numerador, f1.denominador * f2.denominador};
}

Fraccion dividirFracciones(Fraccion f1, Fraccion f2)
{
    return Fraccion{f1.numerador * f2.denominador, f1.denominador * f2.numerador};
}
*/

int main()
{
    // Variables
    int EntUno, EntDos;
    int EntNumUno, EntDenUno, EntNumDos, EntDenDos;

    // Pregunta para entrar en el menú de fracciones
    cout << "Cual es el primer entero?" << endl;
    cin >> EntUno;
    cout << "Cual es el primer numerador?" << endl;
    cin >> EntNumUno;
    cout << "Cual es el primer denominador?" << endl;
    cin >> EntDenUno;
    cout << "Cual es el segundo entero?" << endl;
    cin >> EntDos;
    cout << "Cual es el segundo numerador?" << endl;
    cin >> EntNumDos;
    cout << "Cual es el segundo denominador?" << endl;
    cin >> EntDenDos;

    // ! REVISAR SI SE ESTA REALIZANDO BIEN LA OPERACIÓN
    // Convertir a fracciones propias con EntUno, EntNumUno, EntDenUno
    int FracPpUno = EntDenUno * EntUno + EntNumUno;
    int FracPpDos = EntDenDos * EntDos + EntNumDos;

    cout << "El mcm de " << EntDenUno << " y " << EntDenDos << " es: " << mcm(EntDenUno, EntDenDos) << endl;

    // Convertir en numero entero la función mcm
    int enteroMCM = mcm(EntDenUno, EntDenDos);

    //Fraccion f1 = {FracPpUno, enteroMCM}; // 1/2
    //Fraccion f2 = {FracPpDos, enteroMCM}; // 1/3

    Fraccion f1 = {4, 3}; // 1/2
    Fraccion f2 = {11, 6}; // 1/3

    Fraccion suma = sumarFracciones(f1, f2);
    cout << "Se convierte la fracción mixta en fracción común" << endl;
    cout << "La suma es: " << FracPpUno << "/" << enteroMCM << "+" << FracPpDos << "/" << enteroMCM << "=";
    cout << suma.numerador << "/" << suma.denominador << endl;

    Fraccion resta = restarFracciones(f1, f2);
    cout << "La resta es: " << FracPpUno << "/" << enteroMCM << "-" << FracPpDos << "/" << enteroMCM << "=";
    cout << resta.numerador << "/" << resta.denominador << endl;

    return 0;
}
