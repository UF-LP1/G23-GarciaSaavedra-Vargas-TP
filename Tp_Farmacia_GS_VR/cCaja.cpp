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
cCaja::cCaja(double Saldo){
}
cCaja::cCaja()
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
   eMediosDePago medioactual;
   cliente.SeleccionarMedioPago(medioactual);// aca obtengo que metodo de pago tiene
   double precioaCobrar = cliente.RecibirTicket().get_PrecioFinal();
   Saldo = Saldo + precioaCobrar;
   return Saldo;
}

/**
 * @return void
 */
double cCaja::get_Saldo() {
    return Saldo;
}
