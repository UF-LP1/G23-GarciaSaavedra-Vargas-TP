/**
 * Project Untitled
 */


#ifndef _CCAJA_H
#define _CCAJA_H

class cCaja {
public: 
    
/**
 * @param double Saldo
 */
void Caja(void double Saldo);
    
/**
 * @param cCliente
 */
double Cobrar(void cCliente);
    
void get_Saldo();
protected: 
    
void Caja();
private: 
    double Saldo;
};

#endif //_CCAJA_H