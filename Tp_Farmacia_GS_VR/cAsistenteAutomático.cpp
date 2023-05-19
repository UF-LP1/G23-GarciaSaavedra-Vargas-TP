/**
 * Project Untitled
 */


#include "cAsistenteAutomatico.h"

/**
 * cAsistenteAutomático implementation
 */


cAsistenteAutomatico::cAsistenteAutomatico() {

}
cAsistenteAutomatico::~cAsistenteAutomatico() {

}
/**
 * @param cCliente
 * @return void
 */
void cAsistenteAutomatico::EntregarTicket(cCliente) {
    return;
}
void cAsistenteAutomatico::RecibirCliente(cCliente clienteentrante)
{
    this->nuevosclientes.push(clienteentrante);
}

cCliente  cAsistenteAutomatico::AsignarEmpleado() {
    cCliente clienteentrante;
    if (clienteentrante.get_necesidad() == ObraSocial || Particular || Pami) {
    
        cCliente proximoFarmacia = this->nuevosclientes.front();
        //aca enrealidad lo podria sumar a una cola que tenga cada empleado, en este caso el farmaceutico
        nuevosclientes.pop();
      
    }
    else if (clienteentrante.get_necesidad() == Ortopedia) {
        cCliente proximoOrtopedia;
       //aca lo sumaria a la cola de ortopedia
    }
}


