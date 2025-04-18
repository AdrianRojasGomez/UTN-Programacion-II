#include <iostream>
using namespace std;

/*
Escribe un programa que solicite al usuario ingresar una lista de 10 números
enteros. Luego, el programa debe mostrar los números pares distintos que se
ingresaron. Para resolver este ejercicio, deberás implementar una función que reciba
un vector de enteros y su tamaño, y que devuelva un puntero a un vector dinámico
que contenga solo los números pares distintos del vector recibido.
*/

int * ParesDistintos(int *vec, int tamano)
{
    int paresTotales[tamano] {};
    int indicePares = 0;

    for (int i = 0; i < tamano; i++)
    {
        if(vec[i] % 2 == 0 && indicePares == 0)
        {
            paresTotales[indicePares] = vec[i];
            indicePares++;
        }

        else if(vec[i] % 2 == 0)
        {
            bool repetido = false;

            for(int j = 0; j < indicePares; j++)
            {
                if(vec[i] == paresTotales[j])
                {
                    repetido = true;
                    break;
                }
            }

            if (!repetido)
            {
                paresTotales[indicePares] = vec[i];
                indicePares++;
            }
        }

    }

    int *vecParesUnicos = new int[indicePares];

    for(int i = 0; i < indicePares; i++)
    {
        vecParesUnicos[i] = paresTotales[i];
    }

    cout <<endl<< "Pares unicos dinamico" << endl;

    for(int i = 0; i < indicePares; i++)
    {
        cout << "[" << vecParesUnicos[i] << "]" << " - ";
    }


    cout <<endl<< "Pares totales estatico" << endl;
    for(int i = 0; i < tamano; i++)
    {
        cout << "[" << paresTotales[i] << "]" << " - ";
    }

    return vecParesUnicos;

}

int main()
{
    int vecNumeros[10] {};
    int *numPares = nullptr;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese el numero en la posicion " << i << endl;
        cin >> vecNumeros[i];
    }

    numPares = ParesDistintos(vecNumeros, 10);


    return 0;
}
