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
cTicket::cTicket(string CodigoTicket, double PrecioFinal, eMediosDePago MetodosDePago)
{
}
cTicket::cTicket()
{
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

void cTicket::set_MedotoDePago(eMediosDePago medioactual)
{
    MetodoDePago = medioactual;
}

/**
 * @param cArticulos
 * @return void
 */
void cTicket::AgregarProducto(cArticulos) {
    return;
}
