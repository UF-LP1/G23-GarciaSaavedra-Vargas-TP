/**
 * Project Untitled
 */


#include "cAsistenteAutomatico.h"

/**
 * cAsistenteAutomático implementation
 */


cAsistenteAutomatico::cAsistenteAutomatico(int clientesAtendidos,queue<cCliente>nuevosclientes) {

}
cAsistenteAutomatico::cAsistenteAutomatico()
{
}
cAsistenteAutomatico::~cAsistenteAutomatico() {

}
queue<cCliente> cAsistenteAutomatico::get_cola_clientes() {
    return this->nuevosclientes;
}


void cAsistenteAutomatico::RecibirCliente(cCliente clienteentrante)
{
    this->nuevosclientes.push(clienteentrante);
}

void cAsistenteAutomatico::contar_clientes() {

    for (int i = 0; i < nuevosclientes.size(); i++) {
        this->clientesAtendidos++;
    }

}
/**
 * @param cCliente
 * @return void
 */
void cAsistenteAutomatico::EntregarTicket(cCliente) {
    return;
}