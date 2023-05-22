/**
 * Project Untitled
 */


#include "cEmpleadoFarmaceutico.h"

/**
 * cEmpleadoFarmaceutico implementation
 */
/**
 * @param const string Matricula
 */
cEmpleadoFarmaceutico::cEmpleadoFarmaceutico(string matricula)
    :cEmpleado(NombreYApellido, Dni, Horario){
}
cEmpleadoFarmaceutico::cEmpleadoFarmaceutico() {

}
cEmpleadoFarmaceutico::~cEmpleadoFarmaceutico()
{
}

/**
 * @return void
 */
void cEmpleadoFarmaceutico::AplicarDescuento(cTicket ticket1, cCliente cliente1) {
    if (cliente1.get_necesidad() == ObraSocial)
    {
        ticket1.set_preciof(ticket1.get_PrecioFinal() * 0.6);
    }
    else if (cliente1.get_necesidad() == Pami) {
        ticket1.set_preciof(ticket1.get_PrecioFinal() * 0.9);
    }
    //si la necesidad del cliente incluye un descuento, se le agrega un descuento
   
}
void cEmpleado::AgregarACarrito(cArticulos articulos) {
  //recibe el nombre del articulo del cliente?
  // lo agregaba aca o lo hacia en el cliente?

}
