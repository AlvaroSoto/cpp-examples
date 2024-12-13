#include <iostream>
#include <iomanip> // Para manipular formatos
using namespace std;

#define PI 3.14159
#define NL '\n'

int main() {
    // Constantes
    const int CONST_VALUE = 100;

    // Operadores aritméticos
    int a = 10, b = 3;
    cout << "Suma: " << a + b << NL; // +
    cout << "Resta: " << a - b << NL; // -
    cout << "Multiplicación: " << a * b << NL; // *
    cout << "División: " << a / b << NL; // /
    cout << "Módulo: " << a % b << NL; // %

    // Conversión de primitivas
    double d = static_cast<double>(a) / b;
    cout << "Conversión de int a double: " << d << NL;

    // Formatos
    cout << fixed << setprecision(2);
    cout << "PI formateado: " << PI << NL;

    // Operadores de relación
    cout << "a > b: " << (a > b) << NL; // >
    cout << "a < b: " << (a < b) << NL; // <
    cout << "a >= b: " << (a >= b) << NL; // >=
    cout << "a <= b: " << (a <= b) << NL; // <=
    cout << "a == b: " << (a == b) << NL; // ==
    cout << "a != b: " << (a != b) << NL; // !=

    // Uso de paréntesis
    int c = (a + b) * 2;
    cout << "Resultado con paréntesis: " << c << NL;

    // Operadores lógicos
    bool cond1 = true, cond2 = false;
    cout << "AND lógico: " << (cond1 && cond2) << NL; // &&
    cout << "OR lógico: " << (cond1 || cond2) << NL; // ||
    cout << "NOT lógico: " << (!cond1) << NL; // !

    // Operadores unitarios
    int x = 5;
    cout << "Negación unaria: " << -x << NL; // -
    cout << "Incremento prefijo: " << ++x << NL; // ++ (prefijo)
    cout << "Decremento sufijo: " << x-- << NL; // -- (sufijo)

    // Operadores a nivel de bits
    int y = 5, z = 3;
    cout << "AND a nivel de bits: " << (y & z) << NL; // &
    cout << "OR a nivel de bits: " << (y | z) << NL; // |
    cout << "XOR a nivel de bits: " << (y ^ z) << NL; // ^
    cout << "Desplazamiento a la izquierda: " << (y << 1) << NL; // <<
    cout << "Desplazamiento a la derecha: " << (y >> 1) << NL; // >>

    // Operadores de asignación
    int w = 10;
    w += 5; // +=
    cout << "Asignación con suma: " << w << NL;
    w *= 2; // *=
    cout << "Asignación con multiplicación: " << w << NL;

    // Operador condicional
    int max_val = (a > b) ? a : b;
    cout << "Máximo entre a y b: " << max_val << NL;

    // Operador sizeof
    cout << "Tamaño de int: " << sizeof(int) << " bytes" << NL;

    // Operador coma
    int u, v;
    u = (v = 5, v + 10); // v se asigna primero, luego u se calcula como v + 10
    cout << "Valor de u: " << u << ", Valor de v: " << v << NL;

    // Operador dirección-de y de indirección
    int *ptr = &a; // Dirección de
    cout << "Dirección de a: " << ptr << NL;
    cout << "Valor de a (indirección): " << *ptr << NL; // Indirección

    return 0;
}

// Notas sobre prioridad y orden de evaluación:
// 1. Paréntesis tienen la mayor prioridad.
// 2. Incremento y decremento prefijos > operadores aritméticos > operadores relacionales > operadores lógicos > asignación.
// 3. Los operadores de asignación y coma tienen la menor prioridad.
// 4. En expresiones con operadores de igual prioridad, el orden de evaluación puede depender del compilador (no se especifica).

