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
   
//recibe el carrito del cliente de esta manera accedo al precio final de la compra y devuelvo un ticket con la info
   double precioaCobrar = cliente.get_Carrito().get_PrecioTotal();
   Saldo +=precioaCobrar;

   double DineroCliente = cliente.get_Billetera();
   DineroCliente = DineroCliente - precioaCobrar;
   cliente.set_Billetera(DineroCliente);
 
   cTicket* ticket = cliente.get_Ticket();
   ticket->set_preciof(precioaCobrar);
   cliente.set_ticket(ticket);// cambio el precio del ticket y se lo devuelvo a cliente modificado
   cCaja::muestra_ticket(cliente);
   return Saldo;
}

void cCaja::muestra_ticket(cCliente cliente)
{
    cliente.SeleccionarMedioPago();// ME MODIFICA EL METODO  DE PAGO DEL TICKET Y DE EL
    cTicket* ticket = cliente.get_Ticket();
 
    cout << "Ticket de Farmacia x\n"<<cliente.get_datos() << "\nSu medio de pago elegido fue: " << cliente.get_MediosDePago() << "\nEl precio total es de:" << ticket->get_PrecioFinal();
}



/**
 * @return void
 */
double cCaja::get_Saldo() {

    return Saldo;
}

