## Modelo Parcial 1: Restaurante

Resolver las preguntas que se encuentran a continuación en el archivo Examen.cpp del proyecto que se adjunta. Cada pregunta se debe desarrollar en el método que le corresponde de la clase Examen.


**NOTA:** Únicamente podrán subir en la entrega los archivos Examen.h y Examen.cpp. Todo el código incluidas las funciones globales nuevas (si fuera necesario hacerlas) tienen que estar en desarrolladas en estos archivos. No modifiquen el resto de los archivos del proyecto ya que no podrán subirlos.


# Contexto del problema a resolver

Una restaurante tiene el siguiente archivo con los registros de sus Servicios de Mesa:

**restaurant.dat**

int _IDServicioMesa, _IDMozo (1 a 20), _IDPlato (1 a 70), _tiempoPreparacion;
float _puntajeObtenido, _propina, _importe;
Fecha _fecha;

El restaurante tiene 20 mozos y elabora 70 platos diferentes.

Para poder determinar que un servicio de mesa ha tenido una propina se debe verificar que el valor de la misma sea mayor a 0. Si la propina es cero entonces ese servicio de mesa no ha recibido propina.

---
### 1) Listar la cantidad de servicios de mesa que fueron valorados con un puntaje mayor al puntaje promedio

### 2) Listar el número de plato que recaudó mayor cantidad de dinero

### 3) Listar el número de mozo que recibió mayor cantidad total de propinas en el año 2024
---