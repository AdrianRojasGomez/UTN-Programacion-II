#pragma once

class Triangulo
{
private:
    int _lados[3]{};
    bool isEscaleno();
    bool isIsoceles();
    bool isEquilatero();

public:
    int getLado(int lado);
    void setLado(int lado, int longitud);

    int getTipo();


};
