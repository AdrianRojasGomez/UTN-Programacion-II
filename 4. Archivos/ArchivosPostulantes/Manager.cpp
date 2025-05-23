#include <iostream>
#include <string>
#include "Postulante.h"
#include "Manager.h"
#include "GestorArchivos.h"
using namespace std;

void Manager::RegistrarPostulante()
{
    Postulante postulante;
    GestorArchivos gArchivos;

    int id;
    string apellidos;
    string nombres;
    int edad;
    string puesto;
    int aniosExperiencia;
    bool isContratado;

    cout << "Ingrese ID" << endl;
    cin >> id;
    cout << "Ingrese apellidos" << endl;
    cin.ignore();
    getline(cin,apellidos);
    cout << "Ingrese nombres" << endl;    getline(cin,nombres);
    cout << "Ingrese edad" << endl;
    cin >> edad;
    cout << "Ingrese puesto" << endl;
    cin.ignore();
    getline(cin,puesto);
    cout << "Ingrese anios de experiencia" << endl;
    cin >> aniosExperiencia;
    cout << "Esta Contratado?" << endl;
    cin >> isContratado;


    postulante = Postulante(id,apellidos,nombres,edad,puesto,aniosExperiencia,isContratado);
    if(gArchivos.GuardarPostulante(postulante))
    {
        cout << "Se guardo el postulante correctamente" << endl;
    }
    else
    {
        cout << "Error inesperado al guardar" << endl;
    }

}

void Manager::VerCantidadRegistros()
{
    GestorArchivos gArchivos;
    cout << "La cantidad de registros es de " << gArchivos.getCantidadRegistros();

}

void Manager::VerListaPostulantes()
{
    Postulante registro;
    GestorArchivos gArchivos;
    int cantReg = gArchivos.getCantidadRegistros();

    for(int i = 0; i < cantReg; i++)
    {
        registro = gArchivos.LeerUnRegistro(i);
        registro.toCSV();
    }


}

void Manager::VerContratados()
{
    Postulante registro;
    GestorArchivos gArchivos;
    int cantReg = gArchivos.getCantidadRegistros();

    for(int i = 0; i < cantReg; i++)
    {
        registro = gArchivos.LeerUnRegistro(i);
        if(registro.getIsContratado())
        {
            cout << "--------------------------------" << endl;
            cout << "ID: " << registro.getID() << endl;
            cout << "Apellidos: " << registro.getApellidos() << endl;
            cout << "Nombres : " << registro.getNombres() << endl;
            cout << "--------------------------------" << endl;
        }
    }
}

void Manager::FiltrarPostulantesPuestoExperiencia()
{
    Postulante registro;
    GestorArchivos gArchivos;
    int cantReg = gArchivos.getCantidadRegistros();
    string puesto;
    int aniosXP;


    cout << "Ingrese el puesto que desea Filtrar:  ";
    cin >> puesto;
    cout << "Ingrese la cantidad de anios de Experiencia que desea Filtrar:  ";
    cin >> aniosXP;


    for(int i = 0; i < cantReg; i++)
    {
        registro = gArchivos.LeerUnRegistro(i);

        if(registro.getAniosExperiencia() >= aniosXP && registro.getPuesto() == puesto)
        {
            cout << "--------------------------------" << endl;
            cout << "ID: " << registro.getID() << endl;
            cout << "Apellidos: " << registro.getApellidos() << endl;
            cout << "Nombres : " << registro.getNombres() << endl;
            cout << "--------------------------------" << endl;
        }
    }

}

