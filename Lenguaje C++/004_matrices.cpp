#include <stdio.h>
#include <locale.h>

#define N 10 // Tamaño de la matriz

// void = no recibe parámetros y no retorna nada
int main(void){
    setlocale(0, "spanish"); //Setlocale se utiliza para asegurarse de que las operaciones de formato como printf y scanf utilicen el formato adecuado para la región española.
    char car = 'A';
    int ent = 0;
    double real = 0.0;
    // char cadena[80];
    // Inicializar la cadena de caracteres
    char cadena[80] = "Hola";
    // Matriz de N elementos
    // float m[10];
    float m[N]; // Se define una matriz de tamaño N para almacenar elementos flotantes.
    // Estos elementos se organizan en fila y en columna seria por ejemplo m[i][j], donde i y j son índices que van desde 0 hasta N-1.

    printf("%c\n", car);
    printf("%d\n", ent);
    printf("%lf\n", real);
    printf("%s\n", cadena);

    printf("Hola, ¿cómo estás?\n");
    printf("\n");
    printf("Cadena de caracteres:"); scanf("%s", cadena);
    printf("La variable \"cadena\" contiene: %s\n", cadena);

    printf("Introduce datos para la matriz:\n");
    // for, variable de control i, inicializan i, condición de salida, incremento de i
    // Captura de datos para la matriz.
    for (int i = 0; i < N; i++)
    {
        printf("m[%d] = ", i);
        scanf("%f", &m[i]);
    }
    // Impresión de los valores introducidos en la matriz.

    printf("Valores introducidos en la matriz m:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%g ", m[i]);
        printf("\n");
    }
}

