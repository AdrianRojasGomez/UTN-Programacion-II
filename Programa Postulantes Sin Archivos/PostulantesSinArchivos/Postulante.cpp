#include <iostream>
#include <string>
#include "Postulante.h"

using namespace std;

void Postulante::RegistroPostulante()
{
    bool invalido = false;
    string nombre;
    int edad;
    int exp;
    string puesto;
    do
    {
        invalido = false;

        cout << "Ingrese su Nombre:" << endl;
        cin >> nombre;
        setNombre(nombre);

        cout << "Ingrese su Edad:" << endl;
        cin >> edad;
        if(edad < 0)
        {
            cout << "Edad Ingresada Invalida, por favor ingrese los datos nuevamente" << endl;
            invalido = true;
            continue;
        }
        setEdad(edad);

        cout << "Ingrese sus anios de Experiencia" << endl;
        cin >> exp;
        if(exp < 0)
        {
            cout << "Edad Ingresada Invalida, por favor ingrese los datos nuevamente" << endl;
            invalido = true;
            continue;
        }
        setExperiencia(exp);

        cout << "Ingrese el nombre del puesto al que esta postulando" << endl;
        cin >> puesto;
        setPuesto(puesto);
    }
    while(invalido);
}

string Postulante::getNombre()
{
    return _nombre;
}
void Postulante::setNombre(string nombre)
{
    _nombre = nombre;
}

int Postulante::getEdad()
{
    return _edad;
}
void Postulante::setEdad(int edad)
{
    _edad = edad;
}

string Postulante::getPuesto()
{
    return _puesto;
}
void Postulante::setPuesto(string puesto)
{
    _puesto = puesto;
}

int Postulante::getExperiencia()
{
    return _experiencia;
}

void Postulante::setExperiencia(int experiencia)
{
    _experiencia = experiencia;
}
