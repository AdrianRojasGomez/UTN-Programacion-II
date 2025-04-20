#include <iostream>
#include "Termometro.h"
using namespace std;
/*
Crea una clase llamada Termometro que represente un term�metro
digital. La clase debe contener los siguientes atributos:
- temperatura (float): Almacena la temperatura actual medida por
el term�metro.
- unidad (char): Almacena la unidad de medida de la temperatura
('C' para Celsius, 'F' para Fahrenheit).

Implementa los siguientes m�todos:
- Termometro(float tempInicial, char unidadInicial):
Constructor que inicializa la temperatura y la unidad de medida.
- get y set de temperatura.
- cambiarUnidad(char nuevaUnidad): Cambia la unidad de
medida entre Celsius y Fahrenheit. Si la nueva unidad es diferente
de la actual, convierte la temperatura a la nueva unidad.
    - F�rmula de conversi�n de Celsius a Fahrenheit: (C * 9/5)
+ 32
    - F�rmula de conversi�n de Fahrenheit a Celsius: (F - 32)
* 5/9
- getUnidad(): Devuelve la unidad actual de medida.
*/

int main()
{
    Termometro termometro;

    termometro.setTemperatura(35);
    termometro.MostrarTemperatura();
    termometro.CambiarUnidad('F');
    termometro.CambiarUnidad('C');
    termometro.CambiarUnidad('A');

    return 0;
}
