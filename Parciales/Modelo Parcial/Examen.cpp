#include <iostream>
using namespace std;

#include "Examen.h"
#include "ServicioMesa.h"
#include "ArchivoServicioMesa.h"

void Examen::EjemploDeListado(){
   ArchivoServicioMesa archivo("restaurant.dat");
   ServicioMesa registro;

   int i, cantidadRegistros = archivo.CantidadRegistros();
   for(i = 0; i < cantidadRegistros; i++){
      registro = archivo.Leer(i);
      cout << registro.toCSV() << endl;
   }
}

///Listar la cantidad de servicios de mesa que fueron valorados con un puntaje mayor al puntaje promedio
void Examen::Punto1()
{

    ArchivoServicioMesa archivo("restaurant.dat");
    ServicioMesa registro;

    int ArribaPromedio = 0;
    float total = 0;
    float puntajePromedio;

    int cantidadRegistros = archivo.CantidadRegistros();

    if(cantidadRegistros == 0)
    {
        ///Evita divisiones por 0 y ahorra leer y calcular todo si no va a ser posible operar
        cout <<"Ha ocurrido un error obteniendo la cantidad de registros" <<endl;
        return;
    }

    for (int i = 0; i < cantidadRegistros; i++)
    {
        registro = archivo.Leer(i);
        total += registro.getPuntajeObtenido();
    }

    puntajePromedio = total / cantidadRegistros;

    for (int i = 0; i < cantidadRegistros; i++)
    {
        registro = archivo.Leer(i);
        if(registro.getPuntajeObtenido() > puntajePromedio)
        {
            ArribaPromedio++;
        }
    }
    cout << "La cantidad de servicios de mesa que estuvieron por arriba del promedio fueron de " << ArribaPromedio << endl;

}

///Listar el número de plato que recaudó mayor cantidad de dinero
void Examen::Punto2()
{
    ArchivoServicioMesa archivo("restaurant.dat");
    ServicioMesa registro;

    int cantidadRegistros = archivo.CantidadRegistros();

    float ImportePlatos[70]{};
    int IDPlatoMayor;
    int ImporteMayor = -1;

    for(int i = 0; i < cantidadRegistros; i++)
    {
        registro = archivo.Leer(i);
        ImportePlatos[registro.getIDPlato()-1] += registro.getImporte();
    }

    //Recorro el Vector ImportePlatos y consigo el mayor
    for (int i = 0; i < 70; i++)
    {
        if(ImportePlatos[i] > ImporteMayor)
        {
            IDPlatoMayor = i+1;
            ImporteMayor = ImportePlatos[i];
        }
    }

    cout << "El ID del plato que recaudo mayor cantidad de dinero es el  " << IDPlatoMayor << endl;
}

///Listar el número de mozo que recibió mayor cantidad total de propinas en el año 2024
void Examen::Punto3(){
    ArchivoServicioMesa archivo("restaurant.dat");
    ServicioMesa registro;

    int cantidadRegistros = archivo.CantidadRegistros();

    float CantidadPropinas[20];
    int IDMozoMayor = 0;

    for (int i = 0; i < cantidadRegistros; i++)
    {
        registro = archivo.Leer(i);
        if(registro.getFecha().getAnio() == 2024 && registro.getPropina() > 0)
        {
            CantidadPropinas[registro.getIDMozo()-1]++;
        }
    }
    //Recorro el vector CantidadPropinas y busco el mayor
    for (int i =0; i < 20; i++)
    {
        if(CantidadPropinas[i] > CantidadPropinas[IDMozoMayor])
        {
            IDMozoMayor = i + 1;
        }
    }


    cout << "El ID del mozo que recaudo mayor cantidad de propinas es el  " << IDMozoMayor << endl;

}
