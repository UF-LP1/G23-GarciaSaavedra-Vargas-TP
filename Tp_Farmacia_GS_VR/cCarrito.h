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
    cCarrito(const string idcarrito, int contproductos, double preciototal, vector<cArticulos> articulos);
    cCarrito();
    ~cCarrito();
    /**
     * @param cCliente
     */
    //HACER UN SET Y UN GET PARA PODER MODIFICAR EL VECTOR DE ARTICULOS DESDE EMPLEADO


private:
    const string Idcarrito;
    int Contproductos;
    double Preciototal;
    vector<cArticulos> artactuales;

};

#endif //_CCARRITO_H