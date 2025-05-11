#include "Menu.h"
#include "Manager.h"
#include <iostream>
#include <string>

using namespace std;

void Menu::Mostrar()
{
    Manager manager;
    int opcion;

    do
    {
        cout << "\n----- MENU -----\n";
        cout << "1. Registrar postulante\n";
        cout << "2. Ver lista completa de postulantes\n";
        cout << "3. Filtrar postulantes por puesto y por experiencia\n";
        cout << "4. Ver lista de las personas contratadas\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";

        cin >> opcion;

        switch(opcion)
        {
        case 1:
            ///Registrar Postulante
            manager.RegistrarPostulante();
            break;
        case 2:
            ///Ver lista completa de postulantes
            break;
        case 3:
            ///Filtrar postulantes por puesto y XP
            break;
        case 4:
            ///Ver lista de contratados
            break;
        case 0:
            return;
        default:
            cout << "Opcion invalida, Por favor elija una de las opciones disponibles\n\n";
        }
        cout << "\n\n";
    }
    while (opcion != 0);



}
