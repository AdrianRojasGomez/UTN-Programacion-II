#include <iostream>
using namespace std;

/*
Hacer una función que reciba un vector de enteros y su tamaño y luego muestre el
vector ordenado de forma ascendente, tener en cuenta que el vector enviado como
argumento no debe ser modificado.
*/

//Algoritmo de Seleccion
void MostrarVectorOrdenado(int *vec, int tamano)
{
    int i, j, aux, posMin;
    int *copia = new int[tamano];

    for(i = 0; i < tamano; i++)
    {
        copia[i] = vec[i];
    }

    for ( i = 0; i < tamano; i++)
    {
        posMin = i;
        for (j= i+1; j < tamano; j++)
        {
            if(copia[j] < copia[posMin])
                posMin = j;
        }
        aux = copia[i];
        copia[i] = copia[posMin];
        copia[posMin] = aux;
    }
        cout <<endl<< "Ordenado Ascendente" << endl;
    for (i = 0; i < tamano; i++)
    {
        cout << "[" << copia[i] << "]" << " - ";
    }

    delete [] copia;
}

int main() {

 int listaDeNumeros[10] = {12,  4,  1,  -3,  -1,   8,  -5,  -12,  4,   4 };

 MostrarVectorOrdenado(listaDeNumeros, 10);
    cout <<endl<< "Lista de Numeros" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "[" << listaDeNumeros[i] << "]" << " - ";
    }

    return 0;
}
