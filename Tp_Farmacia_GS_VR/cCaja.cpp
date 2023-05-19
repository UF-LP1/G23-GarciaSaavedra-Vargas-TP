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
cCaja::cCaja(double saldo){
    this->Saldo = saldo;
}
cCaja::cCaja()
{
    this->Saldo = 0;
}
cCaja::~cCaja(){
}

/**
 * @param cCliente
 * @return double
 */
double cCaja::Cobrar(cCliente cliente) {
   
//se accede al metodo recibir ticket de cliente, metodo que devuelve el ticket asignado a cliente, de esta manera accedo al precio final de la compra

   double precioaCobrar = cliente.RecibirTicket().get_PrecioFinal();
   Saldo = Saldo + precioaCobrar;

   double DineroCliente = cliente.get_Billetera();
   DineroCliente = DineroCliente - precioaCobrar;
   cliente.set_Billetera(DineroCliente);

   cliente.SeleccionarMedioPago();// aca obtengo que metodo de pago tiene
   //¿DIFERENTES BILLETERAS PARA CADA METODO?
   //podria haber un if que evalue que metodo de pago es y asi acceder a esa billetera?
   
   return Saldo;
}

/**
 * @return void
 */
double cCaja::get_Saldo() {

    return Saldo;
}
