#include <iostream>
using namespace std;

/// No esta muy bueno, si pones valores 0 en el vector se rompe, no reconoce los valores 0 porque el vector comienza en 0, podria inicializarlo con un
/// valor -999999999 con un for, pero el problema seria el mismo.

bool EstaAgregado(int NUMERO, int vecProcesados[])
{
    bool agregado = false;
    for (int i = 0; i < 10; i++)
    {
       if(NUMERO == vecProcesados[i])
       {
          agregado = true;
       }
    }

    return agregado;

}

int QuitarRepetidos(int vecSinProcesar[], int vecProcesados[])
{
    int repetidos = 0;

    for (int i = 0; i < 10; i++)
    {
        int cantidad = 1;
        for (int j = 0; j < 10; j++)
        {
            if(vecSinProcesar[i] == vecSinProcesar[j] && i != j)
            {
                if(!EstaAgregado(vecSinProcesar[j], vecProcesados))
                {
                    vecProcesados[i] = vecSinProcesar[j];
                    repetidos++;
                }
            }
        }
    }

    return repetidos;

}

int main() {

int vectorSinProcesar[10]{ 1, 2, 1, 2, 5, 5, 4, 4, 3, 3 } ;
int vectorSinRepetidos[10]{0};
int elementos = 0;

elementos = QuitarRepetidos(vectorSinProcesar, vectorSinRepetidos);

cout << elementos << " Elementos Repetidos" << endl;

for (int i = 0; i  < 10 ; i++)
{
    cout << vectorSinRepetidos[i] << endl;
}
 	return 0;
}
