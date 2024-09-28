// generar números pares e impares hasta un numero dado por el usuario
#include <stdio.h>

int main() {
    int num, i;
    printf("Introduce un número para generar los números pares e impares hasta él: ");
    scanf("%d", &num);
    printf("Los números pares e impares hasta %d son:\n", num);
    for (i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            printf("%d es par\n", i);
        } else {
            printf("%d es impar\n", i);
        }
    }
    return 0;
}