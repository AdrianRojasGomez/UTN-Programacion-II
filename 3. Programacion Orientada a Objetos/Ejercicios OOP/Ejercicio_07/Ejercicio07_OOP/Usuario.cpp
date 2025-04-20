#include <iostream>
#include "Usuario.h"

#include <string>

using namespace std;

    Usuario::Usuario(string nombre, string clave, string rol)
    {

    }

    string Usuario::getNombre()
    {
        return _nombre;
    }
    void Usuario::setNombre(string nombre)
    {
        _nombre = nombre;
    }

    string Usuario::getClave()
    {
        return _clave;
    }
    void Usuario::setClave(string clave)
    {
        _clave = clave;
    }
    string Usuario::getRol()
    {
        return _rol;
    }
    void Usuario::setRol(string rol)
    {
        if(rol != "admin" && rol != "user")
        {
            cout << "Ingrese un rol valido: admin/user" << endl;
            return;
        }

        _rol = rol;
    }



