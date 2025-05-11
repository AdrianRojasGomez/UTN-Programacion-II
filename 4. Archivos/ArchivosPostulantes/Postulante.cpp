#include <string>
///Para copiar vectores de char se usa strcpy con esta libreria de C para los strings
#include <cstring>
#include <iostream>
#include "Postulante.h"
using namespace std;

Postulante::Postulante()
{
    /// NO PUEDES ASIGNAR UN VECTOR DE CHAR COMO _apellidos = ""
    _id = 0;
    strcpy(_apellidos,"");
    strcpy(_nombres,"");
    _edad = 0;
    strcpy(_puesto,"");
    _aniosExperiencia = 0;
    _isContratado = false;
}

Postulante::Postulante(int id, string apellidos, string nombres, int edad, string puesto, int aniosExperiencia, bool isContratado)
{
    setID(id);
    setApellidos(apellidos);
    setNombres(nombres);
    setEdad(edad);
    setPuesto(puesto);
    setAniosExperiencia(aniosExperiencia);
    setIsContratado(isContratado);

}

void Postulante::toCSV()
{
    string csv;
    csv = to_string(_id);
    csv += ",";
    csv += string(_apellidos);
    csv += ",";
    csv += string(_nombres);
    csv += ",";    csv += to_string(_edad);
    csv += ",";
    csv += string(_puesto);
    csv += ",";
    csv += to_string(_aniosExperiencia);
    csv += ",";
    csv += to_string(_isContratado);

    cout << csv << endl;
}


int Postulante::getID()
{
    return _id;
}

void Postulante::setID(int id)
{
    _id = id;
}

string Postulante::getApellidos()
{
    return _apellidos;
}
void Postulante::setApellidos(string apellidos)
{
    strcpy(_apellidos,apellidos.c_str());
}

string Postulante::getNombres()
{
    return _nombres;
}
void Postulante::setNombres(string nombres)
{
    strcpy(_nombres,nombres.c_str());
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
    strcpy(_puesto,puesto.c_str());
}

int Postulante::getAniosExperiencia()
{
    return _aniosExperiencia;
}
void Postulante::setAniosExperiencia(int aniosExperiencia)
{
    _aniosExperiencia = aniosExperiencia;
}

bool Postulante::getIsContratado()
{
    return _isContratado;
}
void Postulante::setIsContratado(bool isContratado)
{
    _isContratado = isContratado;
}

