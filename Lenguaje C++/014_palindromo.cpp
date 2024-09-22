#include <iostream>
#include <algorithm>
using namespace std;

bool esPalindromo(const string& palabra) {
    string copia = palabra;
    transform(copia.begin(), copia.end(), copia.begin(), ::tolower); // Convertir a minúsculas
    reverse(copia.begin(), copia.end());
    return copia == palabra;
}

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    if (esPalindromo(palabra)) {
        cout << "La palabra es un palíndromo." << endl;
    } else {
        cout << "La palabra no es un palíndromo." << endl;
    }

    return 0;
}

// Revisa el código y asegúrate de que funciona correctamente para diferentes casos, como palabras con mayúsculas, minúsculas y espacios.