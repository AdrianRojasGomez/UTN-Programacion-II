#pragma once

class Punto
{
private:
    float _posX;
    float _posY;

public:
    Punto();
    Punto(float posX, float posY);

    float getX();
    void setX(float posX);

    float getY();
    void setY(float posY);

    float CalcularDistancia(Punto otroPunto);
    void Mover(float deltaX, float deltaY);
};
