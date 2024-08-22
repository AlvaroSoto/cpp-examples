// numero primo es aquel que solo es divisible entre 1 y él mismo
#include <stdio.h>

int numprimos();

int main() {
    int num, i, primo = 1;
    printf("Introduce un número para saber si es primo: ");
    scanf("%d", &num);
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            primo = 0;
            break;
        }
    }
    if (primo) {
        printf("%d es un número primo\n", num);
    } else {
        printf("%d no es un número primo\n", num);
    }
    numprimos();
    return 0;
}

// generar numeros primos hasta un numero dado por el usuario
int numprimos() {
    int num, i, j, primo;
    printf("Introduce un número para generar los números primos hasta él: ");
    scanf("%d", &num);
    printf("Los números primos hasta %d son:\n", num);
    for (i = 2; i <= num; i++) {
        primo = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) {
            printf("%d\n", i);
        }
    }
    return 0;
}