#include <iostream>
using namespace std;

#include "Examen.h"
#include "Servicio.h"
#include "ArchivoServicio.h"

void Examen::EjemploDeListado()
{
    ArchivoServicio archivo("taller.dat");
    Servicio registro;

    int i, cantidadRegistros = archivo.CantidadRegistros();
    for(i = 0; i < cantidadRegistros; i++)
    {
        registro = archivo.Leer(i);
        cout << registro.toCSV() << endl;
    }

}
///Informar la calificación mínima obtenida, y los ID de reparación que la recibieron.
void Examen::Punto1()
{
    ArchivoServicio archivo("taller.dat");
    Servicio registro;
    float calificacionMinima = 0;
    const int ID_MAX_REPARACION = 70 ;
    bool IDMinimo[ID_MAX_REPARACION] {};


    int i, cantidadRegistros = archivo.CantidadRegistros();

    for (i = 0; i < cantidadRegistros; i++)
    {
        registro = archivo.Leer(i);
        float aux = registro.getCalificacion();
        if( i == 0 || aux < calificacionMinima)
        {
            calificacionMinima = aux;
        }
    }
    cout << "Pregunta #1:" << endl;
    cout << "La calificacion minima fue de "  << to_string(calificacionMinima) << endl;

    for (int i = 0; i < cantidadRegistros; i++)
    {
        registro = archivo.Leer(i);
        if(calificacionMinima == registro.getCalificacion())
        {
            IDMinimo[registro.getIDReparacion()-1] = true;
        }
    }

    cout << "Los ID de reparacion que obtuvieron esta calificacion fueron: " << endl;
    for (int i = 0; i < ID_MAX_REPARACION; i++)
    {
        if(IDMinimo[i])
        {
            cout << "- IDReparacion:" << i+1 << endl;
        }
    }
    cout << "---------------------------" << endl;
}

///Calcular e informar el número de empleado(ID de personal) con mayor cantidad de servicios de reparación
void Examen::Punto2()
{
    ArchivoServicio archivo("taller.dat");
    Servicio registro;

    int i, cantidadRegistros = archivo.CantidadRegistros();

    const int NUMERO_EMPLEADOS = 20;

    int ContadorIDPersonal[NUMERO_EMPLEADOS] {};
    int IDMayor;
    int contadorMayor;

    for(i = 0; i < cantidadRegistros; i++)
    {
        registro = archivo.Leer(i);
        ContadorIDPersonal[registro.getIDPersonal()]++;
    }

    for (int i = 0; i < NUMERO_EMPLEADOS; i++)
    {

        if( i == 0 || contadorMayor < ContadorIDPersonal[i])
        {
            contadorMayor = ContadorIDPersonal[i];
            IDMayor = i;
        }
    }
    cout << "Pregunta #2:" << endl;
    cout << "El numero de empleado(ID de personal) con mayor reparaciones es el " << IDMayor + 1 << "." << endl;
    cout << "---------------------------" << endl;

}

///Listar la cantidad de Id de reparación distintos que tuvieron servicios en el año 2024
void Examen::Punto3()
{

    ArchivoServicio archivo("taller.dat");
    Servicio registro;

    int i, cantidadRegistros = archivo.CantidadRegistros();
    const int ID_MAX_REPARACION = 70;
    bool IDReparacionUnico[ID_MAX_REPARACION]{};
    int contadorIDUnicos = 0;

    for ( i = 0; i < cantidadRegistros; i++)
    {
        registro = archivo.Leer(i);

        if(registro.getFecha().getAnio() == 2024)
        {
            if(!IDReparacionUnico[registro.getIDReparacion()-1])
            {
                IDReparacionUnico[registro.getIDReparacion()-1] = true;
                contadorIDUnicos++;
            }
        }
    }

    cout << "Pregunta #3:" << endl;
    cout << "En el 2024 la cantidad de ID de Reparacion Unicos fue de:" << " "<< contadorIDUnicos << endl;
    cout << "---------------------------" << endl;

}

