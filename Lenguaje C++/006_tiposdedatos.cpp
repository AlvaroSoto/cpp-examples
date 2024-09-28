#include <stdio.h>

int main(void){
    // Inicializar las variables
    char c;
    int i;
    float f;
    double d;
    long double ld;
    // Asignar valores a las variables
    c = 'A';
    i = 10;
    f = 3.1416F; // La F indica que es un número flotante
    d = 3.14159265358979323846;
    ld = 3.14159265358979323846;
    // Visualizar los valores de las variables
    // %c: Carácter, %d: Entero, %f: Flotante, %lf: Doble
    printf("El valor de c es: %c\n", c);
    printf("El valor de i es: %d\n", i);
    printf("El valor de f es: %f\n", f);
    printf("El valor de d es: %.15lf\n", d); // Precisión de 15 decimales maximo
    printf("El valor de ld es: %.18Lf\n", ld); // Precisión de 15 decimales maximo
}