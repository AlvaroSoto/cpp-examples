#include <stdio.h>

main(){
    int dato1, dato2, resultado;
    dato1 = 20;
    dato2 = 10;

    // Suma
    resultado = dato1 + dato2;
    printf("La suma de %d + %d es: %d\n", dato1, dato2, resultado);

    // Resta
    resultado = dato1 - dato2;
    printf("La resta de %d - %d es: %d\n", dato1, dato2, resultado);

    // Multiplicación
    resultado = dato1 * dato2;
    printf("La multiplicación de %d * %d es: %d\n", dato1, dato2, resultado);

    // División
    resultado = dato1 / dato2;
    printf("La división de %d / %d es: %d\n", dato1, dato2, resultado);
}