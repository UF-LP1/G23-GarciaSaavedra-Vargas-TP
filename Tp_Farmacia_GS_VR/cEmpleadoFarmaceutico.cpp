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
cEmpleadoFarmaceutico::cEmpleadoFarmaceutico(string nombrefarmaceutico,const string dni,string horario,queue<cCliente> colaclientes, string matricula)
    :cEmpleado(NombreYApellido, Dni, Horario,colaclientes){
    this->Matricula = matricula;
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
    while(!listaclientes.empty()) {

        cCliente cliaux = listaclientes.front();
        listaclientes.pop();
        
        cTicket* ticketaux = cliaux.get_Ticket();
        if (cliaux.get_necesidad() == ObraSocial)
        {
            ticketaux->set_preciof(ticketaux->get_PrecioFinal() * 0.6);
        }
        else if (cliaux.get_necesidad() == Pami) {
            ticketaux->set_preciof(ticketaux->get_PrecioFinal() * 0.9);
        }
    }
}

