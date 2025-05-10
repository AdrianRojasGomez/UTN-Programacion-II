#pragma once
#include <string>

class Postulante
{
private:

    std::string _nombre;
    int _edad;
    std::string _puesto;
    int _experiencia;

public:

    std::string getNombre();
    void setNombre(std::string nombre);

    int getEdad();
    void setEdad(int edad);

    std::string getPuesto();
    void setPuesto(std::string puesto);

    int getExperiencia();
    void setExperiencia(int experiencia);

    void RegistroPostulante();

};
