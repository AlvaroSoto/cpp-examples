#include <stdio.h>
#include <math.h>

double leerDato(); // Prototipo de la función leerDato

double log(double x) {
    double resultado;
    resultado = log10(x);
    return resultado;
}

int main(void){
    double x, n;
    printf("Introduce un número: ");
    n = leerDato(); // Llamada a la función leerDato
    x = log(n);
    printf("El logaritmo de %lf es: %lf\n", n, x);
}

double leerDato(){ // Definición de la función leerDato
    int r = 0;
    double dato;
    while (r == 0)
    {
        r = scanf("%lf", &dato);
        if (r == 0)
        {
            printf("El dato introducido no es válido\n");
        }
        while (getchar() != '\n'); // Limpiar el buffer de entrada
    }
    return dato;
}