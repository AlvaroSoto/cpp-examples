#include <stdio.h>
#include <math.h>

// Función para calcular el logaritmo
double logaritmo(double x){
    double resultado;
    // Código para calcular el logaritmo
    resultado = log10(x);
    return resultado;
}

main(){
    int dato1, dato2, resultado;
    dato1 = 20;
    dato2 = 0;

    // Condición para que el número sea diferente de 0 y limpiar el buffer de entrada
    while (dato2 == 0)
    {
        // Pedir un número al usuario
        printf("Introduce un número: ");
        scanf("%d", &dato2);
        if (dato2 == 0)
        {
            printf("El número debe ser diferente de 0\n");
        }
        while (getchar() != '\n'); // Limpiar el buffer de entrada
    }
    
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

    // Logaritmo
    printf("El logaritmo de %d es: %lf\n", dato2, logaritmo(dato2));
}