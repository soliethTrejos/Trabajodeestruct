#include <iostream>

using namespace std;


void convertirNumeros() {
    int numeros[15];

    cout << "Ingrese 15 numeros negativos:\n";

    for (int i = 0; i < 15; i++) {
        cin >> numeros[i];

        numeros[i] = -numeros[i];
    }

    cout << "Numeros convertidos a positivos:\n";

    for (int i = 0; i < 15; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;
}
