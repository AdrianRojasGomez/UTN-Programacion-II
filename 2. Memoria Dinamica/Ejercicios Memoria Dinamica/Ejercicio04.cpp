#include <iostream>
using namespace std;
/*
Hacer una función que reciba un vector de enteros y su tamaño y devuelva la
cantidad de números distintos que se repiten en el vector.
*/

int NumerosDistintos(int *vec, int tamano)
{
    int cantidad = 0;

    int *aux = new int[tamano];
    int posAux = 0;

    for(int i = 0; i < tamano; i++)
    {
        for (int j = 0; j< tamano; j++)
        {

            cout << vec[i] << " vs " << vec[j] << endl;
            if(vec[i] == vec[j] && i != j)
            {
                cout << "Entro con " << vec[j] << endl;
                if(posAux == 0)
                {
                    cout << "Entro posAux " << posAux << endl;
                    aux[posAux] = vec[j];
                    cout << aux[posAux] << " Pos " << posAux << endl << endl;
                    posAux++;
                    cantidad++;
                }
                else
                {
                    bool repetido = false;
                    for(int k = 0; k < posAux; k++)
                    {
                        if(vec[j] == aux[k])
                        {
                            repetido = true;
                            break;
                        }
                    }

                    if(!repetido)
                    {

                        aux[posAux] = vec[j];
                        cout << aux[posAux] << " Pos " << posAux << endl << endl;
                        posAux++;
                        cantidad++;
                    }
                }
            }
        }
        cout << endl;

    }

    for (int i = 0; i < tamano; i++)
    {
        cout << aux[i] << "\t";
    }
    cout << endl;

    delete [] aux;

    return cantidad;
}


int main() {

 int listaDeNumeros[10] = {-12,  4,  1,  -3,  -1,   8,  -5,  -12,  4,   4 };

 int cantidad = NumerosDistintos(listaDeNumeros, 10);

 cout << cantidad;

 	return 0;
}
