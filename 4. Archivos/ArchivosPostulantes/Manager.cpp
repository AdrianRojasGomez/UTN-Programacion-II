#include <iostream>
#include <string>
#include "Manager.h"
#include "Postulante.h"

using namespace std;

void Manager::RegistrarPostulante()
{
    Postulante postulante;
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

    postulante.toCSV();



}
