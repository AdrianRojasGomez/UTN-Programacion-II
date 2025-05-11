#include <iostream>
#include <string>
#include "GestorArchivos.h"
#include "Postulante.h"

using namespace std;

GestorArchivos::GestorArchivos()
{
    _nombreArchivo = "postulantes.dat";
}
GestorArchivos::GestorArchivos(string nombreArchivo)
{
    _nombreArchivo = nombreArchivo;
}

bool GestorArchivos::GuardarPostulante(Postulante registro)
{
    ///1. Creamos puntero File
    FILE * pFile;
    bool escritos;

    ///2. Abrimos el archivo con fopen ab, si no existe lo crea, si existe append
    pFile = fopen(_nombreArchivo.c_str(),"ab");

    ///3. Validamos que pFile haya abierto correctamente, que no sea nullptr
    if(pFile == nullptr)
    {
        cout << "Error al abrir el archivo" << endl;
        return false;
    }

    ///4. Escribimos en el archivo con fwrite
    escritos = fwrite(&registro,sizeof(Postulante),1,pFile);
    if(!escritos)
    {
        cout << "Error al escribir el archivo" << endl;
        return false;
    }

    ///5. Cerramos el Archivo
    fclose(pFile);

    return escritos;
}

int GestorArchivos::getCantidadRegistros()
{
    int tamRegistro = sizeof(Postulante);
    int tamArchivo, cantidadRegistros;

    ///1. Puntero File
    FILE * pFile;

    ///2. Abrir el archivo en modo lectura
    pFile = fopen(_nombreArchivo.c_str(),"rb");

    ///3. Validamos que pFile haya abierto correctamente, que no sea nullptr
    if(pFile == nullptr)
    {
        cout << "Error al abrir el archivo" << endl;
        return 0;
    }

    ///4. Movemos el cursor de lectura al final del archivo
    fseek(pFile,0,SEEK_END);
    tamArchivo = ftell(pFile);

    if(tamRegistro != 0)
    {
        cantidadRegistros = tamArchivo / tamRegistro;
    }
    else
    {
        cout << "Hubo un error con el tamaño del Registro" << endl;
        fclose(pFile);
        return 0;
    }

    fclose(pFile);

    return cantidadRegistros;
}

Postulante GestorArchivos::LeerUnRegistro(int numRegistro)
{
    Postulante registro;
    FILE * pFile = fopen(_nombreArchivo.c_str(),"rb");

    if (pFile == nullptr)
    {
        return registro;
    }

    fseek(pFile,sizeof(Postulante)* numRegistro, SEEK_SET);
    fread(&registro, sizeof(Postulante),1,pFile);
    fclose(pFile);

    return registro;
}
