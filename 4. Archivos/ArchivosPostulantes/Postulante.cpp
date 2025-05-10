#include "Postulante.h"
#include <string>
///Para copiar vectores de char se usa strcpy con esta libreria de C para los strings
#include <cstring>
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

