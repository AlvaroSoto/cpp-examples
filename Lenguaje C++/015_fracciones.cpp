// Realiza operación de suma y resta de fracciones con mcm y simplificación de fracciones
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
struct Fraction
{
    int numerador;
    int denominador;
    
};
// Función para sumar fracciones
Fraction sumarFracciones(Fraction f1, Fraction f2)
{
    int denominadorCom = f1.denominador * f2.denominador;
    int numeradorResultante = f1.numerador * f2.denominador + f2.numerador * f1.denominador;
    return Fraction{numeradorResultante, denominadorCom};
}

Fraction restarFracciones(Fraction f1, Fraction f2)
{
    int denominadorCom = f1.denominador * f2.denominador;
    int numeradorResultante = f1.numerador * f2.denominador - f2.numerador * f1.denominador;
    return Fraction{numeradorResultante, denominadorCom};
}

int main()
{
    // Variables
    int EntUno, EntDos = 0;
    int EntNumUno, EntDenUno, EntNumDos, EntDenDos = 0;

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

    // Convertir de mixta a común
    EntNumUno = EntUno * EntDenUno + EntNumUno;
    EntNumDos = EntDos * EntDenDos + EntNumDos;

    cout << "El mcm de " << EntDenUno << " y " << EntDenDos << " es: " << mcm(EntDenUno, EntDenDos) << endl;

    // Convertir en numero entero la función mcm
    int enteroMCM = mcm(EntDenUno, EntDenDos);

    Fraction f1 = {EntNumUno, EntDenUno}; // 1/2
    Fraction f2 = {EntNumDos, EntDenDos}; // 1/3

    Fraction suma = sumarFracciones(f1, f2);
    cout << "Se convierte la fracción mixta en fracción común" << endl;
    cout << "La suma es: " << EntNumUno << "/" << enteroMCM << "+" << EntNumDos << "/" << enteroMCM << "=";
    cout << suma.numerador << "/" << suma.denominador << endl;

    Fraction resta = restarFracciones(f1, f2);
    cout << "La resta es: " << EntNumUno << "/" << enteroMCM << "-" << EntNumDos << "/" << enteroMCM << "=";
    cout << resta.numerador << "/" << resta.denominador << endl;

    return 0;
}
