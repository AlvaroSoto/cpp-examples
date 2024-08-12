#include <stdio.h>

int main() {
    int num, i;
    printf("Introduce un número: ");
    scanf("%d", &num);
    printf("Los 10 primeros múltiplos de %d son:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}