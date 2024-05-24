#include <iostream>
#include "ejercicios.cpp"

using namespace std;

int main()
{
    int ejer;
    cout << "Ingrese el ejercicio a conocer: "<<endl;
    cin >> ejer;
    cout<<endl;

    if (ejer == 1)
    {
        ejercicio1();
    }
    else if (ejer == 2)
    {
        ejercicio2();
    }
    else if (ejer == 3)
    {
        ejercicio3();
    }
    else
    {
        cout << "No se encuentra el ejercicio";
    }
    return 0;
}
