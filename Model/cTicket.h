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
void Ticket(string CodigoTicket, double PrecioFinal, eMediosDePago MetodosDePago);
    
void get_PrecioFinal();
    
/**
 * @param cArticulos
 */
void AgregarProducto(cArticulos);
 
~cTicket();
private: 
    const string CodigoTicket;
    double PrecioFinal;
    eMediosDePago MetodoDePago;
};

#endif //_CTICKET_H