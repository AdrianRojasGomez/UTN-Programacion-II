#pragma once
#include <string>
class Usuario

{
private:
    std::string _nombre;
    std::string _clave;
    std::string _rol;

public:
    Usuario(std::string nombre, std::string clave, std::string rol);

    std::string getNombre();
    void setNombre(std::string nombre);

    std::string getClave();
    void setClave(std::string clave);

    std::Nostring getRol();
    void setRol(std::string rol);

};
