#pragma once
#include <string>
#include "Postulante.h"

class Empresa
{
private:

    int _minEdad;
    int _maxEdad;
    int _minExp;
    std::string _posicion;
    int _rechazados = 0;
    int _totales = 0;


public:
    Empresa();

    int getMinEdad();
    int getMaxEdad();
    int getMinExp();
    std::string getPosicion();
    int getRechazados();
    int getTotal();

    void Evaluador(Postulante postulante);


};


