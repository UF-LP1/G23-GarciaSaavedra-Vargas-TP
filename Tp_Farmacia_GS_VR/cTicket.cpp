 /**
 * Project Untitled
 */


#include "cTicket.h"

/**
 * cTicket implementation
 */

/**
 * @param string CodigoTicket
 * @param double PrecioFinal
 * @param eMediosDePago MetodosDePago
 */

cTicket::cTicket(const string codigoticket):CodigoTicket(codigoticket)
{
    this->MetodoDePago = Efectivo;
    this->PrecioFinal = 0.0;

}
cTicket::cTicket()
{
    this->PrecioFinal = 0.0;
    this->MetodoDePago = Efectivo;
}
cTicket:: ~cTicket()
{
}
/**
 * @return void
 */
double cTicket::get_PrecioFinal() 
{
    return PrecioFinal;
}

void cTicket::set_MetodoDePago(eMediosDePago medioactual)
{
    this->MetodoDePago = medioactual;
}
void cTicket:: set_preciof(double preciofinal)
{
    this->PrecioFinal = preciofinal;
}

/**
 * @param cArticulos
 * @return void
 */
