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
cTicket::cTicket(string codigoticket, double PrecioFinal, eMediosDePago metodosdepago):CodigoTicket(codigoticket)
{
    this->PrecioFinal = PrecioFinal;
    this->MetodoDePago = metodosdepago;

}
cTicket::cTicket()
{
    this->PrecioFinal = 0;
    this->MetodoDePago = Debito;
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
void cTicket::AgregarProducto(cArticulos) {
    return;
}