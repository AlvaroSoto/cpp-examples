#include <stdio.h>

// Encontrar los numeros compuestos de un numero
int main() {
    int num, i, j, compuesto;
    printf("Introduce un número: ");
    scanf("%d", &num);
    printf("%d es número compuesto,\n", num);
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            printf("porque es divisible entre: %d\n", i);
        }
    }
    return 0;
}
