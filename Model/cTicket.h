/**
 * Project Untitled
 */


#ifndef _CTICKET_H
#define _CTICKET_H
#include <iostream>
#include <string>
using namespace std;
#include "eMediosDePago.h"
#include "cArticulos.h"

class cTicket {
public: 
    
/**
 * @param string CodigoTicket
 * @param double PrecioFinal
 * @param eMediosDePago MetodosDePago
 */
cTicket(string CodigoTicket, double PrecioFinal, eMediosDePago MetodosDePago);
cTicket();
~cTicket();
double get_PrecioFinal();
    
/**
 * @param cArticulos
 */
void AgregarProducto(cArticulos);
 

private: 
    const string CodigoTicket;
    double PrecioFinal = 2000;
    eMediosDePago MetodoDePago {};
};

#endif //_CTICKET_H