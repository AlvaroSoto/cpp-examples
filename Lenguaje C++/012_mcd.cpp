// máximo común divisor (mcd) de dos números
#include <stdio.h>

int main() {
    int num1, num2, i, mcd=1;
    printf("Introduce dos números para calcular su máximo común divisor: ");
    scanf("%d %d", &num1, &num2);
    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            mcd = i;
        }
    }
    printf("El máximo común divisor de %d y %d es %d\n", num1, num2, mcd);
    return 0;
}