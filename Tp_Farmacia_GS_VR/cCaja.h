/**
 * Project Untitled
 */


#ifndef _CCAJA_H
#define _CCAJA_H

#include "cCliente.h"

class cCaja {
public: 

/**
 * @param double Saldo
 */
cCaja(double saldo);
cCaja();
~cCaja();
/**
 * @param cCliente
 */
double Cobrar(cCliente);
double get_Saldo();
void muestra_ticket(cCliente cliente);

private: 
    double Saldo;
};

#endif //_CCAJA_H