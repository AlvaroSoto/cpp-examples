#include <stdio.h>

// Los enumerados son un tipo de dato que permite definir un conjunto de constantes enteras
// con nombre. Se utilizan para definir conjuntos de constantes que no necesitan un valor
// numérico específico. Por ejemplo, los colores de una bandera, los días de la semana, etc.
// La palabra clave enum se utiliza para definir un enumerado. La sintaxis es la siguiente:
// enum nombre {constante1, constante2, ..., constanteN};
// Las constantes de un enumerado se pueden utilizar como si fueran enteros. Por defecto, la
// primera constante tiene el valor 0, la segunda 1, y así sucesivamente. Sin embargo, se
// pueden asignar valores específicos a las constantes. Por ejemplo:
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