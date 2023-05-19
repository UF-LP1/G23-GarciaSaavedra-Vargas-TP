/**
 * Project Untitled
 */


#ifndef _CASISTENTEAUTOMATICO_H
#define _CASISTENTEAUTOMATICO_H
#include "cEmpleado.h"
#include <queue>
class cAsistenteAutomatico {
public: 
    
cAsistenteAutomatico();
~cAsistenteAutomatico();
    
/**
 * @param cCliente
 */
void EntregarTicket(cCliente);
void RecibirCliente(cCliente);
void AsignarEmpleado();
protected: 
    
private: 
    static int clientesAtendidos;
    queue<cCliente> nuevosclientes;
};

#endif //_CASISTENTEAUTOMÁTICO_H