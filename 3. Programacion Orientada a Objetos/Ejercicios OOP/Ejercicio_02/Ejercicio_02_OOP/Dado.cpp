#include <iostream>
#include <ctime>
#include "Dado.h"

Dado::Dado()
{
    srand(time(NULL));
    _valor = rand() % 6+1;
}
void Dado::Lanzar()
{
    _valor = rand() % 6+1;
}

int Dado::getValor()
{
    return _valor;
}
bool Dado::EsMaximo()
{
    if(_valor == 6)
        return true;
    else
        return false;
}
bool Dado::EsMinimo()
{
    if(_valor == 1)
        return true;
    else
        return false;
}
