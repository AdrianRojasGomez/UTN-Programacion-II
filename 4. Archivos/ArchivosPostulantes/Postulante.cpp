#include "Postulante.h"

int Postulante::getID()
{
    return _id;
}

char * Postulante::getApellidos()
{
    return _apellidos;
}
void Postulante::setApellidos(char * apellidos)
{
    _apellidos = apellidos;
}

char * Postulante::getNombres()
{
    return _nombres;
}
void Postulante::setNombres(char * nombres)
{
    _nombres = nombres;
}

int Postulante::getEdad()
{
    return _edad;
}
void Postulante::setEdad(int edad)
{
    _edad = edad;
}

char * Postulante::getPuesto()
{
    return _puesto;
}
void Postulante::setPuesto(char * puesto)
{
    _puesto = puesto;
}

int Postulante::getAniosExperiencia()
{
    return _aniosExperiencia;
}
void Postulante::setAniosExperiencia(int aniosExperiencia)
{
    _aniosExperiencia = aniosExperiencia;
}
