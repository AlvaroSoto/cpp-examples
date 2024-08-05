#include <stdio.h>

int main(void){
    // Inicializar las variables
    char c;
    int i;
    float f;
    double d;
    // Asignar valores a las variables
    c = 'A';
    i = 10;
    f = 3.1416;
    d = 3.14159265358979323846;
    // Visualizar los valores de las variables
    // %c: Caracter, %d: Entero, %f: Flotante, %lf: Doble
    printf("El valor de c es: %c\n", c);
    printf("El valor de i es: %d\n", i);
    printf("El valor de f es: %f\n", f);
    printf("El valor de d es: %lf\n", d);
}