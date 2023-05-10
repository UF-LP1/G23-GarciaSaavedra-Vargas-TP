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
cCaja(double Saldo);
~cCaja();
/**
 * @param cCliente
 */
double Cobrar(cCliente);
    
void get_Saldo();
protected: 
    
private: 
    double Saldo;
};

#endif //_CCAJA_H