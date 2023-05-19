/**
 * Project Untitled
 */


#include "cFarmacia.h"

/**
 * cFarmacia implementation
 */

/**
 * @param string Nombre
 * @param string Direccion
 * @param time Horario
 * @param const string Telefono
 * @param bool Estado
 * @param double GananciaTotal
 */
cFarmacia::cFarmacia(cCaja caja, string Nombre, string Direccion, time_t horario, string telefono, bool estado, double gananciatotal,cAsistenteAutomatico asistente):Telefono(telefono)
{
    this->Estado = estado;
    this->Horario = horario;
    this->GananciaTotal = gananciatotal;
    this->Caja = caja;
}

/*cFarmacia::cFarmacia()
{
}*/

cFarmacia::~cFarmacia()
{
}

/**
 * @return void
 */
void cFarmacia::EstadoFarmacia() {
    return;
}

/**
 * @param cArticulos
 * @return void
 */
void cFarmacia::ChequearStock(cArticulos) {
    return;
}

/**
 * @param cCliente
 * @param cArticulos
 * @return void
 */
void cFarmacia::RecibirCliente(cCliente,cArticulos) {

    //recibir el enum de medios de pago del asistente automatico y desarrollar este metodo asignandole a los empleados


    return;
}

/**
 * @param cCliente
 * @return void
 */
void cFarmacia::Ganancia(cCaja caja) {
    //se le suma al saldo total de la farmacia lo que se le acaba de cobrar al cliente mediante la caja, a traves del metodo cobrar de la caja
    GananciaTotal = GananciaTotal + caja.get_Saldo();
}