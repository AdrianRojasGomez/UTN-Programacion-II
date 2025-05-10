#pragma once

class Postulante
{
private:
    int _id;
    char _apellidos[50]
    char _nombres[50];
    int _edad;
    char _puesto[50];
    int _aniosExperiencia;


public:
    int getID();

    char * getApellidos();
    void setApellidos(char * apellidos);

    char * getNombres();
    void setNombres(char * nombres);

    int getEdad();
    void setEdad(int edad);

    char * getPuesto();
    void setPuesto(char * puesto);

    int getAniosExperiencia();
    void setAniosExperiencia(int aniosExperiencia);

};

