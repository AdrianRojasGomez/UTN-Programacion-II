#pragma once
#include <string>
#include "Postulante.h"

class GestorArchivos
{
private:

std::string _nombreArchivo;


public:
    GestorArchivos();
    GestorArchivos(std::string nombreArchivo);

    int getCantidadRegistros();

    bool GuardarPostulante(Postulante registro);
    Postulante LeerUnRegistro(int numRegistro);

};

