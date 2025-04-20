#include <iostream>
#include "Rectangulo.h"
using namespace std;

/*
    Crea una clase llamada Rectangulo que represente un rect�ngulo. La
    clase debe tener dos atributos correspondientes a la base y altura.
    Implementa las siguientes metodos:
        - Getters y Setter de cada atributo.
        - calcularArea(): Devuelve el �rea del rect�ngulo.
        - calcularPerimetro(): Devuelve el per�metro del rect�ngulo.
*/
int main()
{
    Rectangulo rectangulo;
    int dato;
    cout << "Ingrese la longitud de la base" << endl;
    cin >> dato;
    rectangulo.setBase(dato);
    cout << "Ingrese la longitud de la altura" << endl;
    cin >> dato;
    rectangulo.setAltura(dato);

    cout << "El area del rectangulo es de " << rectangulo.CalcularArea() << endl;
    cout << "El perimetro del rectangulo es de " << rectangulo.CalcularPerimetro() << endl;


    return 0;
}
