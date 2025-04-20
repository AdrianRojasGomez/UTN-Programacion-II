#include <iostream>
#include "Rectangulo.h"


    int Rectangulo::getAltura()
    {
        return _altura;
    }
    void Rectangulo::setAltura(int altura)
    {
        _altura = altura;
    }

    int Rectangulo::getBase ()
    {
        return _base;
    }
    void Rectangulo::setBase (int base)
    {
        _base = base;
    }

    int Rectangulo::CalcularArea()
    {
        return _base * _altura;
    }
    int Rectangulo::CalcularPerimetro()
    {
        return 2 * (_base + _altura);
    }
