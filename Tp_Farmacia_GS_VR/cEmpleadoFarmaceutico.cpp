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
    :cEmpleado(NombreYApellido, Dni, Horario,listaclientes){
}
cEmpleadoFarmaceutico::cEmpleadoFarmaceutico() {

}
cEmpleadoFarmaceutico::~cEmpleadoFarmaceutico()
{
}
//podria haber un metodo virtual que use el que esta en empleado pero aca solo sirva para medicamentos

/**
 * @return void
 */
void cEmpleadoFarmaceutico::AplicarDescuento() {//es un metodo que analiza que cobertura tiene el cliente y en base a eso aplica descuento
    for (int i = 0; i < this->listaclientes.size(); i++) {


        cCliente cliaux = this->listaclientes[i];
        cTicket ticketaux = cliaux.RecibirTicket();
        if (cliaux.get_necesidad() == ObraSocial)
        {
            ticketaux.set_preciof(ticketaux.get_PrecioFinal() * 0.6);
        }
        else if (cliaux.get_necesidad() == Pami) {
            ticketaux.set_preciof(ticketaux.get_PrecioFinal() * 0.9);
        }
    }
}

