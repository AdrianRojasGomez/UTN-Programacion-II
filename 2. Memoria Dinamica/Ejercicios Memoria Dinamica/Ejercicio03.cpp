#include <iostream>
using namespace std;

/*
Hacer un programa que solicite al usuario 10 números y luego muestre primero los
números positivos y luego los negativos.
El programa debe crear dos arrays dinámicos con la cantidad exacta en cada caso:
uno para almacenar los números positivos y otro para los números negativos.

*/
int main()
{

    int listaDeNumeros[10] = {-12,  7,  -3,  15,  -1,   8,  -5,  20,  -9,   4 };
    int cantPostivos = 0, cantNegativos = 0;


    for (int i = 0; i < 10 ; i++)
    {
        if(listaDeNumeros[i] > 0)
            cantPostivos++;
        else
            cantNegativos++;
    }

    int *vecPos = new int[cantPostivos] {};
    int *vecNeg = new int[cantNegativos] {};
    int indicePos = 0, indiceNeg = 0;

    for (int i = 0; i < 10; i++)
    {

        if(listaDeNumeros[i] < 0)
        {
            vecNeg[indiceNeg] = listaDeNumeros[i];
            indiceNeg++;
        }
        else
        {
            vecPos[indicePos] = listaDeNumeros[i];
            indicePos++;
        }
    }

    cout << "Vector Positivo: " << endl;
    for (int i = 0; i < cantPostivos; i++)
    {
        cout << "[" << vecPos[i] << "]" << "\t";
    }
    cout << endl;

    cout << "Vector Negativo: " << endl;
    for (int i = 0; i < cantNegativos; i++)
    {
        cout << "[" << vecNeg[i] << "]" << "\t";
    }

    return 0;
}
