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

cFarmacia::cFarmacia(cCaja caja, string Nombre, string Direccion, string horario, string telefono, bool estado,cAsistenteAutomatico asistente):Telefono(telefono)
{
    this->Estado = estado;
    this->Horario = horario;
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
void cFarmacia::RecibirCliente() {//metodo que recibe la necesidad del cliente desde el asistente automatico y le asigna un empleado creandolo
   
  queue<cCliente> colaaux = Asistente.get_cola_clientes();

  while(!colaaux.empty()) {
        cCliente cliaux = colaaux.front();
        colaaux.pop();
        if (cliaux.get_necesidad() == ObraSocial || cliaux.get_necesidad() == Particular || cliaux.get_necesidad() == Pami) {
            cEmpleadoFarmaceutico empleado1f("empleadoF1", "45.000.000", "24hs", colaaux, "matricula x");
            empleado1f.AplicarDescuento();
            empleado1f.AgregarACarrito();
            
        }
        else if (cliaux.get_necesidad() == Perfumeria) {
            cEmpleadoPerfumeria empleado1p();
        }
        else {
            cEmpleadoOrtopedia empleado1o("empleadoO1", "45.000.000", "24hs", colaaux);
            empleado1o.AgregarACarrito();
        }
            
    }
}

/**
 * @param cCliente
 * @return void
 */
void cFarmacia::Ganancia(cCaja caja) {
    //se le suma al saldo total de la farmacia lo que se le acaba de cobrar al cliente mediante la caja, a traves del metodo cobrar de la caja
    GananciaTotal = GananciaTotal + caja.get_Saldo();
    cout << "La ganancia total actual de la farmacia es:" << GananciaTotal;
}