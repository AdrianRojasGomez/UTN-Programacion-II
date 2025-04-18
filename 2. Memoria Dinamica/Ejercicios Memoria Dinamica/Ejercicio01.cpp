#include <iostream>
using namespace std;

///Escribe un programa que solicite al usuario el tamaño de un array de enteros, lo cree
///dinámicamente utilizando new, el usuario debe poder cargar el array y mostrarlo, y
///luego libere la memoria con delete


int main()
{

    int tamanoVec;
    int *vec = nullptr;
    cout << "Ingrese el tamaño del vector; " << endl;
    cin >> tamanoVec;

    vec = new int[tamanoVec];

    if(vec == nullptr)
    {
        cout << "No pudo solicitar memoria";
        return -1;
    }

    for (int i = 0; i < tamanoVec; i++)
    {
        int num;
        cout << "Ingrese el numero en la posicion " << i << endl;
        cin >>num;
        vec[i] = num;
    }

    for (int i = 0; i < tamanoVec; i++)
    {
        cout << "[" << vec[i] << "]" << "\t";
    }

    delete [] vec;

 	return 0;
}
