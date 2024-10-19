//máximo común múltiplo (mcm) de dos números
#include <stdio.h>

int main() {
    int num1, num2, i, mcm=1;
    printf("Introduce dos números para calcular su mínimo común múltiplo: ");
    scanf("%d %d", &num1, &num2);
    for (i = 1; i <= num1 * num2; i++) {
        if (i % num1 == 0 && i % num2 == 0) {
            mcm = i;
            break;
        }
    }
    printf("El mínimo común múltiplo de %d y %d es %d\n", num1, num2, mcm);
    return 0;
}