/**
 * Project Untitled
 */


#include "cCaja.h"

/**
 * cCaja implementation
 */


/**
 * @param double Saldo
 */
cCaja::cCaja(double Saldo)
{
}
cCaja::~cCaja(){
}

/**
 * @param cCliente
 * @return double
 */
double cCaja::Cobrar(cCliente cliente) {
   //se accede al metodo recibir ticket de cliente, el cual le devuelve el ticket asignado a cliente, de esta manera accedo al precio final de la compra
    double precioaCobrar = cliente.RecibirTicket().get_PrecioFinal();
    Saldo = Saldo + precioaCobrar;
    return Saldo;
}

/**
 * @return void
 */
void cCaja::get_Saldo() {
    return;
}
