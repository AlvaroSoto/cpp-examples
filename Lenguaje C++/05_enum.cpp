#include <stdio.h>

enum colores {
    azul,
    amarillo,
    rojo,
    verde,
    blanco,
    negro
};

int main(void){
    enum colores color;
    // Leer un color
    printf("Color: ");
    scanf("%d", &color);
    // Visualizar el color
    printf("%d\n", color);
    // Si el color es verde pasara la siguiente condicion
    if (color == verde) printf("Esmeralda\n");
}