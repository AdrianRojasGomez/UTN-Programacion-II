#include <iostream>
#include "Termometro.h"

using namespace std;

Termometro::Termometro()
{
    _unidad = 'C';
    _temperatura = 0;
    MostrarTemperatura();
}

float Termometro::getTemperatura()
{
    return _temperatura;
}
void Termometro::setTemperatura(int temperatura)
{
    _temperatura = temperatura;
}

void Termometro::CambiarUnidad(char unidad)
{
    if(unidad != 'C' && unidad != 'F')
    {
        cout << "Ingrese un simbolo de temperatura valida" << endl;
        return;
    }

    if(_unidad == unidad)
    {
        cout << "La unidad se mantiene como " << _unidad << endl;
        return;
    }

    if(unidad == 'F')
    {
        _temperatura = (_temperatura * 9/5) + 32;
    }
    else
    {
        _temperatura = (_temperatura - 32)* 5/9;
    }

    _unidad = unidad;
    cout << "La temperatuda expresada en '" << _unidad  << "' es de "<< _temperatura << endl;

}

char Termometro::getUnidad()
{
    return _unidad;
}

void Termometro::MostrarTemperatura()
{
    cout << "El termometro indica " << _temperatura << _unidad << endl;
}
