#include <iostream>
using namespace std;


void CargarVector(int &tamano, int *&pVec)
{
    if(pVec != nullptr)
    {
        delete [] pVec;
        pVec = nullptr;
    }

    cout << "Cual es el tamano del vector" << endl;
    cin >> tamano;

    pVec = new int[tamano];

    for(int i = 0; i < tamano; i++)
    {
        int numPos;
        cout << "Ingrese el valor que desea en la posicion " << i << " del vector" << endl;
        cin >> numPos;
        pVec[i] = numPos;
    }
}

void MostrarVector (int tamano, int *pVec)
{
    for (int i = 0; i < tamano; i++)
    {
        cout << "[" << pVec[i] << "]" << "\t";
    }
    cout << endl;
}

void LiberarSalir(int *&pVec)
{
    delete [] pVec;
    pVec = nullptr;
    exit(0);
}



int main() {

 int tamano = 0;
 int *pVec = nullptr;
 int opcion = 0;


 do
 {


    cout << "       ======================= Menu Principal =======================" << endl << endl;
    cout << "1 -  Cargar Vector: El programa debe solicitar al usuario la cantidad de elementos que" << endl;
    cout << "     va a cargar, posteriormente se solicitara cuáles son dichos numeros para" << endl;
        cout << "     almacenarlos en un vector utilizando asignacion dinámica de memoria." << endl << endl;
        cout << "2 -  Mostrar Vector: En caso de tener cargado el vector, debe mostrarlo por pantalla." << endl << endl;
        cout << "3 -  Salir: Sale del programa (no olvidar liberar la memoria)." << endl;
        cout << endl;
        cout << "Seleccione una opcion: ";

        cin >> opcion;

        switch (opcion)
        {

        case 1:
            CargarVector(tamano, pVec);
            break;
        case 2:
            MostrarVector(tamano, pVec);
            break;
        case 3:
            LiberarSalir(pVec);
            break;
        }
    } while (opcion != 3);

    return 0;
}
