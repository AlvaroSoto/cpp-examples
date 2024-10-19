#include <stdio.h>
#include <locale.h>

#define N 10 // Tamaño de la matriz

// void = no recibe parámetros y no retorna nada
int main(void){
    setlocale(0, "spanish");
    char car = 'A';
    int ent = 0, r = 0;
    double real = 0.0;
    // char cadena[80];
    // Inicializar la cadena de caracteres
    char cadena[80] = "Hola";
    // Matriz de N elementos
    // float m[10];
    float m[N];

    printf("%c", car); printf("\n");
    printf("%d", ent); printf("\n");
    printf("%lf", real); printf("\n");
    printf("%s", cadena); printf("\n");

    printf("Hola, ¿cómo estás?\n");
    printf("\n");
    printf("Cadena de caracteres:"); scanf("%s", cadena);
    printf("La variable \"cadena\" contiene: %s\n", cadena);

    printf("Introduce datos para la matriz:\n");
    // for, variable de control i, inicializan i, condición de salida, incremento de is
    for (int i = 0; i < N; i++)
    {
        printf("m[%d] = ", i);
        scanf("%f", &m[i]);
    }
    printf("Valores introducidos en la matriz m:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%g ", m[i]);
        printf("\n");
    }
}

