/**
 * Project Untitled
 */


#include "cEmpleado.h"

/**
 * cEmpleado implementation
 */


/**
 * @param eTipoDeEmpleado Empleado
 * @param string NombreYApellido
 * @param const string Dni
 * @param time Horario
 */

cEmpleado::cEmpleado(string NombreYApellido, const string Dni, time_t Horario) {
}
cEmpleado::cEmpleado() {
}
cEmpleado::~cEmpleado() {
}

/**
 * @param cCliente
 * @param cArticulos
 * @return void
 */
void cEmpleado::AtenderCliente(cCliente cliente) {
    listaclientes.push_back(cliente);
}
void cEmpleado::AgregarACarrito(cArticulos articulo) {
    //ACA AGREGO LOS ARTICULOS A LA LISTA QUE ESTA DENTRO DE CARRITO, A TRAVES DE UN SET Y UN GET
}

/**
 * @param cTicket
 * @return void
 */


/**
 * @param cTicket
 * @return void
 */
 