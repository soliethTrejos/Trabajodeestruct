#include<iostream>
using namespace std;

int cantidad;
int suma = 0;

void sumanumeros();

int main()
{
    sumanumeros();
    return 0;
}

void sumanumeros()
{
    do
    {
        cout << "Ingrese la cantidad a sumar" << endl;
        cin >> cantidad;
        
        if (suma + cantidad > 9999)
        {
            cout << "La suma ha alcanzado 9999" <<endl;
            cout<< "Terminando el proceso..." << endl;
            break;
        }
        
        suma = suma + cantidad;
        cout << "La suma en este momento es de: " << suma << endl;
    }
    while (true);
}