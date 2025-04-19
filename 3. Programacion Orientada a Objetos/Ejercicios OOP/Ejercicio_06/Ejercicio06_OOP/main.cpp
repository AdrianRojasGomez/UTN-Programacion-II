#include <iostream>
#include "Punto.h"
using namespace std;

/*
    Crea una clase llamada Punto que represente un punto en un plano
    cartesiano. La clase debe contener los siguientes atributos:
    - x (float): Almacena la coordenada en el eje X.
    - y (float): Almacena la coordenada en el eje Y.
    Implementa los siguientes m�todos p�blicos:
    - Punto(float xInicial, float yInicial): Constructor que
    inicializa las coordenadas x y y del punto.
    - Getters y Setters para cada atributo.
    - calcularDistancia(Punto otroPunto): Devuelve la
    distancia entre el punto actual y otro punto dado. La f�rmula para
    calcular la distancia entre dos puntos (x1, y1) y (x2, y2) es:
    sqrt((x2 - x1)^2 + (y2 - y1)^2).
    - mover(float deltaX, float deltaY): Mueve el punto
    sumando deltaX a x y deltaY a y.

*/

int main()
{
    Punto punto1;
    Punto punto2(10,10);

    cout << punto1.CalcularDistancia(punto2);

    return 0;
}
