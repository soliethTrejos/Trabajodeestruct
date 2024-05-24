/*3. Escriba un programa que solicite ingresar diferentes 
números la vez y que pueda repetir indefinidamente 
si el usuario lo desea (que el ordenador pregunte 
¿Quiere continuar? y la persona pueda responder S o N.*/

#include <iostream>

using namespace std;

void ejercicio3();

    void ejercicio3(){ 
    char respuesta;
    int num;

    do
    {
        cout << "Ingrese un número: ";
        cin >> num;

        cout << "¿Desea continuar?  S 2. N: ";
        cin >> respuesta;

    } while (respuesta == 'S' || respuesta == 's');

    if (respuesta == 'N' || respuesta == 'n')
    {
        cout << "Saliendo del programa..." << endl;

    }else{
        cout << "Respuesta no válida" << endl;
    }
}
