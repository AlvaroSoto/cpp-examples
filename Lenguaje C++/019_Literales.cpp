// Crear un alias con typpedef
// Crear literales de tipo entero, real, un carácter y de cadena
#include <iostream>

using namespace std;

typedef unsigned int UInt;
typedef long Long;
typedef unsigned long ULong;
typedef long long LongLong;
typedef unsigned long long ULongLong;
typedef float Float;

int main()
{
    Long enteroL = 10L;
    Long enteroLN = -10L;
    UInt enteroU = 20U;
    ULong enteroUL = 30UL;
    LongLong enteroLL = 40LL;
    LongLong enteroLLN = -40LL;
    ULongLong enteroULL = 50ULL;

    int enteroOctal = 012;         // Octal (base 8)
    int enteroOctalN = -012;       // Octal negativo (base 8)
    int enteroHexadecimal = 0xA;   // Hexadecimal (base 16)
    int enteroHexadecimalN = -0xA; // Hexadecimal negativo (base 16)

    Long enteroLS = 10L;
    Long enteroLNS = -10L;
    UInt enteroUS = 20U;
    ULong enteroULS = 30UL;
    LongLong enteroLLS = 40LL;
    LongLong enteroLLNS = -40LL;
    ULongLong enteroULLS = 50ULL;

    int enteroOctalS = 012;         // Octal (base 8)
    int enteroOctalNS = -012;       // Octal negativo (base 8)
    int enteroHexadecimalS = 0xA;   // Hexadecimal (base 16)
    int enteroHexadecimalNS = -0xA; // Hexadecimal negativo (base 16)

    UInt unsignedInt = 60;
    Long largo = 70;
    Long largoN = -70; // Variable long negativa
    ULong unsignedLargo = 80;
    LongLong largoLargo = 90;
    LongLong largoLargoN = -90; // Variable long long negativa
    ULongLong unsignedLargoLargo = 100;

    Float real = 3.14159f;
    Float realN = -3.14159f; // Variable float negativa

    char Letra = 'a';
    const char *cadena = "Hola mundo!";

    char saltoDeLinea = '\n';
    char tabulador = '\t';
    char pitido = '\x07';

    cout << "Valor de `enteroL`: " << enteroL << endl;
    cout << "Valor de `enteroLN`: " << enteroLN << endl;
    cout << "Valor de `enteroU`: " << enteroU << endl;
    cout << "Valor de `enteroUL`: " << enteroUL << endl;
    cout << "Valor de `enteroLL`: " << enteroLL << endl;
    cout << "Valor de `enteroLLN`: " << enteroLLN << endl;
    cout << "Valor de `enteroULL`: " << enteroULL << endl;

    cout << "Valor de `enteroOctal`: " << enteroOctal << endl;
    cout << "Valor de `enteroOctalN`: " << enteroOctalN << endl;
    cout << "Valor de `enteroHexadecimal`: " << enteroHexadecimal << endl;
    cout << "Valor de `enteroHexadecimalN`: " << enteroHexadecimalN << endl;

    cout << "Valor de `enteroLS`: " << enteroLS << endl;
    cout << "Valor de `enteroLNS`: " << enteroLNS << endl;
    cout << "Valor de `enteroUS`: " << enteroUS << endl;
    cout << "Valor de `enteroULS`: " << enteroULS << endl;
    cout << "Valor de `enteroLLS`: " << enteroLLS << endl;
    cout << "Valor de `enteroLLNS`: " << enteroLLNS << endl;
    cout << "Valor de `enteroULLS`: " << enteroULLS << endl;

    cout << "Valor de `enteroOctalS`: " << enteroOctalS << endl;
    cout << "Valor de `enteroOctalNS`: " << enteroOctalNS << endl;
    cout << "Valor de `enteroHexadecimalS`: " << enteroHexadecimalS << endl;
    cout << "Valor de `enteroHexadecimalNS`: " << enteroHexadecimalNS << endl;

    cout << "Valor de `unsignedInt`: " << unsignedInt << endl;
    cout << "Valor de `largo`: " << largo << endl;
    cout << "Valor de `largoN`: " << largoN << endl;
    cout << "Valor de `unsignedLargo`: " << unsignedLargo << endl;
    cout << "Valor de `largoLargo`: " << largoLargo << endl;
    cout << "Valor de `largoLargoN`: " << largoLargoN << endl;
    cout << "Valor de `unsignedLargoLargo`: " << unsignedLargoLargo << endl;

    cout << "Valor de `real`: " << real << endl;
    cout << "Valor de `realN`: " << realN << endl;
    cout << "Valor de `Letra`: " << Letra << endl;
    cout << "Valor de `cadena`: " << cadena << endl;

    cout << "Salto de línea: " << saltoDeLinea;
    cout << "Tabulador: " << tabulador << endl;
    cout << "Pitido: ";

    // El carácter de pitido se puede escuchar al ejecutar el programa
    cout << "Pitido: " << pitido << endl;
    return 0;
}