/**
 * Project Untitled
 */


#ifndef _CASISTENTEAUTOMATICO_H
#define _CASISTENTEAUTOMATICO_H
#include "cEmpleado.h"
#include <queue>
class cAsistenteAutomatico {
public: 
    
cAsistenteAutomatico(int clientesAtendidos, queue<cCliente>nuevosclientes);
cAsistenteAutomatico();
~cAsistenteAutomatico();
    
/**
 * @param cCliente
 */
void EntregarTicket(cCliente);
void RecibirCliente(cCliente);
void contar_clientes();
queue<cCliente> get_cola_clientes();

private: 
    int clientesAtendidos;
    queue<cCliente> nuevosclientes;
};

#endif //_CASISTENTEAUTOMÁTICO_H