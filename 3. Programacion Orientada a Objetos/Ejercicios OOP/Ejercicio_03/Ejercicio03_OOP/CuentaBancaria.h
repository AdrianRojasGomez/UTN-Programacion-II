#pragma once

class CuentaBancaria
{
private:
    int _numeroDeCuenta;
    float _saldoActual;


public:
    CuentaBancaria();
    void Depositar(float monto);
    void Retirar(float monto);
    float ObtenerSaldo();

    int getNumeroDeCuenta();
    void setNumeroDeCuenta();



};
