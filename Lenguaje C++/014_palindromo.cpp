#include <iostream>
//#include <stdio.h> lo comento por uso de cout y cin en sustitucion de printf y scanf
#include <algorithm>
using namespace std;

int main() {
    // con using namespace std; ya no es necesario usar std::cout y std::cin, solo cout y cin
    string palabra;
    // count imprime el numero de caracteres que tiene la cadena
    cout << "Ingrese una frase: ";
    // cin >> palabra; guarda la cadena ingresada por el usuario en la variable palabra
    cin >> palabra; 
    // transform(inicio, fin, inicioDestino, función) convierte todos los caracteres de una cadena a mayúsculas
    transform(palabra.begin(), palabra.end(), palabra.begin(), ::toupper);
    // string(palabra.rbegin(), palabra.rend() crea una nueva cadena a partir de la inversa de palabra
    // otra opción es - reverse(palabra.begin(), palabra.end());
    string palabrainvertida = string(palabra.rbegin(), palabra.rend());
    // compara si la palabra es igual a su inversa
    if (palabra == palabrainvertida)
    {
        cout << "La frase es un palíndromo." << endl;
    }
    else {
        cout << "La frase no es un palíndromo." << endl;
    }
}