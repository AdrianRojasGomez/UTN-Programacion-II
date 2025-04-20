#include <iostream>
#include <math.h>
#include "Punto.h"
using namespace std;

    Punto::Punto()
    {
        _posX = 0;
        _posY = 0;
    }

    Punto::Punto(float posX, float posY)
    {
        setX(posX);
        setY(posY);
    }

    float Punto::getX()
    {
        return _posX;
    }
    void Punto::setX(float posX)
    {
        _posX = posX;
    }

    float Punto::getY()
    {
        return _posY;
    }

    void Punto::setY(float posY)
    {
        _posY = posY;
    }

    float Punto::CalcularDistancia(Punto otroPunto)
    {
        float xRoot = (otroPunto.getX() - this->getX());
        float yRoot = (otroPunto.getY() - this->getY());

        float distancia = sqrt( pow(xRoot,2) + pow(yRoot,2));
        return distancia;
    }

    void Punto::Mover(float deltaX, float deltaY)
    {
        setX(_posX + deltaX);
        setY(_posY + deltaY);
    }
