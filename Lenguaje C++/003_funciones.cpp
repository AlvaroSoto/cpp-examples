#include <stdio.h>
#include <math.h>

// Prototipo de la función leerDato
double leerDato();

// Definición de la función log
double log(double x) {
    double resultado;
    // log10 es una función de la biblioteca math.h que calcula el logaritmo en base 10
    resultado = log10(x);
    // Devolver el resultado
    return resultado;
}

// Definición de la función principal
int main(void){
    double x, n;
    printf("Introduce un número: ");
    n = leerDato(); // Llamada a la función leerDato
    x = log(n); // Llamada a la función log
    printf("El logaritmo de %lf es: %lf\n", n, x);
}

// Definición de la función leerDato
double leerDato(){ // Definición de la función leerDato
    int r = 0;
    double dato;
    // While para comprobar que el dato introducido es válido
    while (r == 0)
    {
        r = scanf("%lf", &dato);
        if (r == 0)
        {
            printf("El dato introducido no es válido\n");
        }
        while (getchar() != '\n'); // Limpiar el buffer de entrada
    }
    // Devolver el dato
    return dato;
}