#pragma once
/**
 * Project Untitled
 */


#ifndef _CCARRITO_H
#define _CCARRITO_H

#include "cCliente.h"
#include <vector>

class cCarrito {
public:

    /**
     * @param double Saldo
     */
    cCarrito(const string idcarrito, int contproductos, double preciototal);
    cCarrito();
    ~cCarrito();
    /**
     * @param cCliente
     */
    void AgregarProducto(cArticulos);

private:
    const string Idcarrito;
    int Contproductos;
    double Preciototal;
    vector<cArticulos> artactuales;

};

#endif //_CCARRITO_H