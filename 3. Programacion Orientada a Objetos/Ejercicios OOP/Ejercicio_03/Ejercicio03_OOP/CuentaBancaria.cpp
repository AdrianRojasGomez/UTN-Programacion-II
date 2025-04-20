#include <iostream>
#include "CuentaBancaria.h"

    CuentaBancaria::CuentaBancaria()
    {
        _saldoActual = 0;
        setNumeroDeCuenta();
        Depositar()

    }


    void CuentaBancaria::Depositar(float monto)
    {
        cout << "Ingrese el monto a depositar" << endl;
        cin >> monto;
        cout << "El monto a ingresar es de: $" << monto << endl;
        _saldoActual += monto;
        cout << "El saldo actual es de: $" << _saldoActual << endl;
    }

    void CuentaBancaria::Depositar()
    {
        int monto;
        cout << "Ingrese el monto a depositar" << endl;
        cin >> monto;
        _saldoActual += monto;
        cout << "El saldo actual es de: $" << _saldoActual << endl;
    }

    void CuentaBancaria::Retirar(float monto)
    {
        if(monto > _saldoActual)
        {
            cout << "Saldo insuficiente" << endl;
            return;
        }

        _saldoActual -= monto;
        cout << "$" << monto << "Retirado." << endl;
        cout << "Saldo actual $" << ObtenerSaldo();
    }
    float CuentaBancaria::ObtenerSaldo()
    {
        return _saldoActual
    }


    int CuentaBancaria::getNumeroDeCuenta()
    {
        return _numeroDeCuenta;
    }
    void CuentaBancaria::setNumeroDeCuenta()
    {
        cout << "Ingrese el numero de cuenta" << endl;
        cin >> _numeroDeCuenta

        cout << "El numero de cuenta ingresado es el:" << _numeroDeCuenta
    }
