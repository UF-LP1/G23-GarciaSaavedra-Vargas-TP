/**
 * Project Untitled
 */
#include "cFarmacia.h"
#include "cEmpleadoFarmaceutico.h"
#include "cEmpleadoPerfumeria.h"
#include  "cEmpleadoOrtopedia.h"
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
void cFarmacia::RecibirCliente(cCliente cliente,cArticulos articulos) {
    //recibir el enum de necesidad del asistente automatico y desarrollar este metodo asignandole a los empleados
    if (cliente.get_necesidad() == ObraSocial || Particular || Pami) {
        cEmpleadoFarmaceutico empleado1f("matricula x");
    }
    else if (cliente.get_necesidad() == Perfumeria)
        cEmpleadoPerfumeria empleado1p();
    else 
        cEmpleadoOrtopedia empleado1o();
}

/**
 * @param cCliente
 * @return void
 */
void cFarmacia::Ganancia(cCaja caja) {
    //se le suma al saldo total de la farmacia lo que se le acaba de cobrar al cliente mediante la caja, a traves del metodo cobrar de la caja
    GananciaTotal = GananciaTotal + caja.get_Saldo();
}