// .\016_pipe.exe | .\017_pipe.exe
#include <iostream>
using namespace std;

int main() {
    // Genera datos para enviar al segundo programa
    for (int i = 1; i <= 5; ++i) {
        cout << "Mensaje " << i << endl;
    }
    return 0;
}