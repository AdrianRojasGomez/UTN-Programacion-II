#pragma once

class Termometro
{
private:
    float _temperatura;
    char _unidad;

public:
    Termometro();

    float getTemperatura();
    void setTemperatura(int temperatura);

    void CambiarUnidad(char unidad);
    char getUnidad();

    void MostrarTemperatura();
};
