#include <stdio.h>
#include <math.h>

// Función para calcular el logaritmo
double logaritmo(double x){
    double res;
    // Código para calcular el logaritmo
    res = log10(x);
    return res;
}

int main() {
    // Declaración de variables
    double dat1, dat2, res;
    dat1 = 20.0;
    dat2 = 0.0;

    // Condición para que el número sea diferente de 0 y limpiar el buffer de entrada
    while (dat2 == 0)
    {
        // Pedir un número al usuario
        printf("Introduce un número: ");
        scanf("%lf", &dat2);
        if (dat2 == 0)
        {
            printf("El número debe ser diferente de 0\n");
        }
        while (getchar() != '\n'); // Limpiar el buffer de entrada
    }
    
    // Suma
    res = dat1 + dat2;
    printf("La suma de %.2f + %.2f es: %.2f\n", dat1, dat2, res);

    // Resta
    res = dat1 - dat2;
    printf("La resta de %.2f - %.2f es: %.2f\n", dat1, dat2, res);

    // Multiplicación
    res = dat1 * dat2;
    printf("La multiplicación de %.2f * %.2f es: %.2f\n", dat1, dat2, res);

    // División
    res = dat1 / dat2;
    printf("La división de %.2f / %.2f es: %.2f\n", dat1, dat2, res);

    // Logaritmo
    printf("El logaritmo de %.2f es: %.2lf\n", dat2, logaritmo(dat2));
}