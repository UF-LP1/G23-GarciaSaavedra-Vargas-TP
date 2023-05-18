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
cFarmacia::cFarmacia(cCaja caja, string Nombre, string Direccion, time_t horario, const string Telefono, bool estado, double gananciatotal)
{
    this->Estado = estado;
    this->Horario = horario;
    this->GananciaTotal = gananciatotal;
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
    return;
}

/**
 * @param cCliente
 * @return void
 */
void cFarmacia::Cobrar(cCliente cliente) {
    //se le suma al saldo total de la farmacia lo que se le acaba de cobrar al cliente mediante la caja, a traves del metodo cobrar de la caja
    GananciaTotal = GananciaTotal + caja.Cobrar(cliente);
}