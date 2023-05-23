/**
 * Project Untitled
 */

#ifndef _CTICKET_H
#define _CTICKET_H
/*#include <iostream>
#include <string>*/
using namespace std;
#include "eMediosDePago.h"
#include "cArticulos.h"
#include <iostream>
class cTicket {
public: 
    
/**
 * @param string CodigoTicket
 * @param double PrecioFinal
 * @param eMediosDePago MetodosDePago
 */
cTicket(string CodigoTicket, double preciofinal, eMediosDePago MetodoDePago);
cTicket();
~cTicket();

double get_PrecioFinal();
void set_MetodoDePago(eMediosDePago medioactual);
void set_preciof(double preciofinal);

/**
 * @param cArticulos
 */


private: 
    const string CodigoTicket;
    double PrecioFinal;
    eMediosDePago MetodoDePago;
};

#endif //_CTICKET_H