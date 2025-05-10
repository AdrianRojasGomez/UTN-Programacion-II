#include <iostream>
#include "Postulante.h"
#include "Empresa.h"
using namespace std;

int main()
{
    Postulante postulante;
    Empresa empresa;

    int opcion = -1;
    while (opcion != 0)
    {
        cout << "=========== MENU DE POSTULANTES ==========\n";
        cout << "1) Registrar Postulante\n";
        cout << "2) Evaluar Postulante\n";
        cout << "3) Mostrar Total de Postulantes evaluados y rechazados\n";
        cout << "0) Salir\n";
        cout << "Seleccione una opcion: ";
        cout << '\n';
        cin >> opcion;

        switch(opcion)
        {
        case 0:
            exit(0);
        case 1:
            postulante.RegistroPostulante();
            break;
        case 2:
            empresa.Evaluador(postulante);
            break;
        case 3:
            cout << "Postulantes Totales " << empresa.getTotal() << " \t Totales rechazados " << empresa.getRechazados() << endl;
            break;
        default:
            cout << "Ingrese una opcion Valida" << endl << endl;
            break;
        }

    }
    return 0;
}


