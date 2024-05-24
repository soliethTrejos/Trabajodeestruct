#include <iostream>

using namespace std;

#include<iostream>
using namespace std;

int Maximo=9999;
double cantidad;
int Suma=0;

void ejericio1();
void ejercicio2();
void ejercicio3();

void ejercicio1(){
    do {
    cout << "Indique una cantidad a sumar" << endl;
    cin >> cantidad;
    if (Suma<=9998){
        Suma=Suma+cantidad;
        cout << "La suma en este momento es: " << Suma << endl; 
    }
    else 
    {
        cout << "La carga ha finalizado"<<endl;
        cout << "La suma total es: "<<9999<<endl;
    }    
    }
    while (Suma<=9998);


}

void ejercicio2()
{
    int numeros[15];

    cout << "Ingrese 15 numeros negativos:\n";

    for (int i = 0; i < 15; i++)
    {
        cin >> numeros[i];

        numeros[i] = -numeros[i];
    }

    cout << "Numeros convertidos a positivos:\n";

    for (int i = 0; i < 15; i++)
    {
        cout << numeros[i] << " ";
    }

    cout << endl;
}



void ejercicio3()
{
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
    }
    else
    {
        cout << "Respuesta no válida" << endl;
        
    }
}
