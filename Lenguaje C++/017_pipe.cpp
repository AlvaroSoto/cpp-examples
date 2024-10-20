// .\016_pipe.exe | .\017_pipe.exe
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;

    // Leer datos desde la entrada estándar
    while (getline(cin, input)) {
        cout << "Recibido: " << input << endl;
    }
    return 0;
}