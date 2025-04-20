#include <iostream>
#include "Triangulo.h"

using namespace std;

bool Triangulo::isEquilatero()
{
    if(_lados[0] == _lados[1]
       && _lados[1] == _lados[2])
        return true;
    else
        return false;
}

bool Triangulo::isIsoceles()
{
    if(_lados[0] == _lados[1]
       || _lados[1] == _lados[2]
       || _lados [0] == _lados[2])
    {
        return true;
    }
    else
        return false;
}

bool Triangulo::isEscaleno()
{
    if(_lados[0] != _lados[1]
       && _lados[0] != _lados[2]
       && _lados[1] != _lados[2])
    {
        return true;
    }
    else
        return false;
}

int Triangulo::getLado(int lado)
{
    if(lado < 1 || lado > 3)
    {
        cout << "Ingrese un numero de lado valido, del 1 al 3" << endl;
        return 0;
    }

    return _lados[lado-1];
}

void Triangulo::setLado(int lado, int longitud)
{
       if(lado < 1 || lado > 3)
    {
        cout << "Ingrese un numero de lado valido, del 1 al 3" << endl;
        return;
    }

    _lados[lado-1] = longitud;
}

int Triangulo::getTipo()
{
    if(isEquilatero())
        return 1;
    else if (isIsoceles())
        return 2;
    else
        return 3;
}


