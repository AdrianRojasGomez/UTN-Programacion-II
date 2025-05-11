#pragma once
#include <string>

class Postulante
{
private:
    int _id;
    char _apellidos[50];
    char _nombres[50];
    int _edad;
    char _puesto[50];
    int _aniosExperiencia;
    bool _isContratado;


public:
    Postulante();
    Postulante(int id, std::string apellidos, std::string nombres, int edad, std::string puesto, int aniosExperiencia, bool isContratado);

    void toCSV();

    int getID();
    void setID(int id);

    std::string getApellidos();
    void setApellidos(std::string apellidos);

    std::string getNombres();
    void setNombres(std::string nombres);

    int getEdad();
    void setEdad(int edad);

    std::string getPuesto();
    void setPuesto(std::string puesto);

    int getAniosExperiencia();
    void setAniosExperiencia(int aniosExperiencia);

    bool getIsContratado();
    void setIsContratado(bool isContratado);

};

