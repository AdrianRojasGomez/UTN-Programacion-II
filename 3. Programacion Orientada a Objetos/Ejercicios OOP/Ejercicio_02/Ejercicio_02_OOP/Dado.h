#pragma once

class Dado
{
private:
    int _valor = 3;

public:
     Dado();
     void Lanzar();

     int getValor();
     bool EsMaximo();
     bool EsMinimo();

};
