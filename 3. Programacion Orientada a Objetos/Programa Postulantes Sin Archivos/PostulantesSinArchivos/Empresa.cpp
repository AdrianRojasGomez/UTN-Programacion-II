#include <iostream>
#include <string>
#include "Empresa.h"
#include "Postulante.h"

using namespace std;

Empresa::Empresa()
{
     _minEdad = 22;
     _maxEdad = 50;
     _minExp = 2;
     _posicion = "Programador";
}

void Empresa::Evaluador(Postulante postulante)
{
    _totales++;
    if(postulante.getEdad() < _minEdad || postulante.getEdad() >_maxEdad)
    {
        _rechazados++;
        cout << "Este postulante no cumple con alguno de los requisitos" << endl;
        return;
    }

    if(postulante.getExperiencia() < _minExp)
    {
        _rechazados++;
        cout << "Este postulante no cumple con alguno de los requisitos" << endl;
        return;
    }

    if(postulante.getPuesto() != _posicion)
    {
        _rechazados++;
        cout << "Este postulante no cumple con alguno de los requisitos" << endl;
        return;
    }

    cout << "Felicidades, este postulante cumple con todos los requisitos para ser contratado" << endl;


}


int Empresa::getMinEdad()
{
    return _minEdad;
}
int Empresa::getMaxEdad()
{
    return _maxEdad;
}
int Empresa::getMinExp()
{
    return _minExp;
}
string Empresa::getPosicion()
{
    return _posicion;
}
int Empresa::getRechazados()
{
    return _rechazados;
}
    int Empresa::getTotal()
    {
        return _totales;
    }
