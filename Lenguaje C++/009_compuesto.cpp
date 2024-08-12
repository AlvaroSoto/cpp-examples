#include <stdio.h>

// Encontrar los numeros compuestos de un numero
int main() {
    int num, i, j, compuesto;
    printf("Introduce un número: ");
    scanf("%d", &num);
    printf("Los números compuestos de %d son:\n", num);
    for (i = 2; i < num; i++) {
        compuesto = 0;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                compuesto = 1;
                break;
            }
        }
        if (compuesto == 1) {
            printf("%d\n", i);
        }
    }
    return 0;
}
