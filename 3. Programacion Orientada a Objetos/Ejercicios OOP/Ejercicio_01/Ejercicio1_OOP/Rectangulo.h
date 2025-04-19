#pragma once

class Rectangulo
{
private:
    int _altura;
    int _base;

public:
    int getAltura();
    void setAltura(int altura);

    int getBase ();
    void setBase (int base);

    int CalcularArea();
    int CalcularPerimetro();
};
