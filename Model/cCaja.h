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
void Caja(double Saldo);
    
/**
 * @param cCliente
 */
double Cobrar(cCliente);
    
void get_Saldo();
protected: 
    
void Caja();
private: 
    double Saldo;
};

#endif //_CCAJA_H