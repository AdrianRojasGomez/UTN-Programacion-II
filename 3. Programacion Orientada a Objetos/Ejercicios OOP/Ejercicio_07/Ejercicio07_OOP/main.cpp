#include <iostream>
#include "Usuario.h"
using namespace std;

/*

    Crea una clase llamada Usuario que represente a un usuario en un
    sistema. La clase debe tener los siguientes atributos:
    - Nombre (string)
    - Clave (string)
    - Rol (string): Puede ser "admin" o "user".
    Implementa los siguientes m�todos:
    - Usuario(string nombre, string clave, string rol): Constructor que
    inicializa los atributos.
    - getter y setter de cada atributo

    Desarrolla un programa que realice lo siguiente:
    1. Cargar en el sistema una lista de 5 usuarios utilizando un array de
    objetos Usuario (esto debe estar hardcodeado en el programa).
    2. Solicitar al usuario que ingrese su nombre y contrase�a al iniciar el
    programa.
    3. Verificar si las credenciales ingresadas coinciden con alguno de
    los usuarios cargados en el sistema utilizando una funci�n que
    reciba el array de usuarios, la cantidad de usuarios, el nombre y la
    contrase�a. Esta funci�n debe devolver el �ndice donde se
    encuentra el usuario en el array, o -1 si el usuario no existe.
    4. Si se encuentra un usuario con las credenciales correctas, permitir
    el acceso al sistema mostrando el rol al que pertenece con un
    saludo amigable. Utiliza una funci�n que reciba un objeto Usuario
    y muestre el saludo con el rol espec�fico.
    5. Si el usuario ingresa credenciales incorrectas, permitir un m�ximo
    de 3 intentos. Si se agotan los intentos, el programa debe finalizar
    indicando que se han agotado los intentos.

*/
int main()
{

    Usuario usuarios[5] =
    {
        Usuario("Adrian",   "Adrian123","admin"),
        Usuario("Jack",     "kiko123",  "user"),
        Usuario("Ali",      "Play123",  "user"),
        Usuario("Corali",   "opopo123", "admin"),
        Usuario("Lia",      "cros123",  "user")
    };




    return 0;
}
