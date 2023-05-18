/**
 * Project Untitled
 */


#ifndef _CCAJA_H
#define _CCAJA_H
//¿porque caja tendria que incluir a cliente si ya esta conectado por la farmacia?
//#include "cCliente.h"
#include "cFarmacia.h"
class cCaja {
public: 

/**
 * @param double Saldo
 */
cCaja(double Saldo);
cCaja();
~cCaja();
/**
 * @param cCliente
 */
double Cobrar(cCliente);
    
double get_Saldo();
 
    
private: 
    double Saldo;
};

#endif //_CCAJA_H