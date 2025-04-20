#include <iostream>
#include "Triangulo.h"
using namespace std;

/*
    Crea una clase llamada Triangulo que represente un tri�ngulo. La clase
    debe contener un vector de 3 elementos, donde cada elemento
    corresponde a la longitud de un lado del tri�ngulo. Implementa los
    siguientes m�todos:
    - getLado(int numero): Devuelve la longitud del valor del lado
    correspondiente al n�mero proporcionado (1, 2, o 3). Si el n�mero
    es incorrecto (fuera del rango 1-3), devuelve cero.
    - setLado(int numero, float valor): Establece el valor del
    lado correspondiente al n�mero proporcionado (1, 2, o 3). Si el
    n�mero es incorrecto (fuera del rango 1-3), no realiza ninguna
    acci�n.
    - getTipo(): Devuelve el tipo de tri�ngulo seg�n sus lados:
        - 1 para un tri�ngulo equil�tero (todos los lados iguales).
        - 2 para un tri�ngulo is�sceles (dos lados iguales).
        - 3 para un tri�ngulo escaleno (todos los lados diferentes).
    - isEscaleno(): Devuelve true si el tri�ngulo es escaleno, false
    en caso contrario.
    - isIsosceles(): Devuelve true si el tri�ngulo es is�sceles,
    false en caso contrario.
    - isEquilatero(): Devuelve true si el tri�ngulo es equil�tero,
    false en caso contrario.
*/

int main()
{
    Triangulo triangulo;

    triangulo.setLado(1,1);
    triangulo.setLado(2,1);
    triangulo.setLado(3,1);

    cout << triangulo.getTipo();

    return 0;
}
