/**
 * Project Untitled
 */


#ifndef _CASISTENTEAUTOMATICO_H
#define _CASISTENTEAUTOMATICO_H
#include "cEmpleado.h"
class cAsistenteAutomatico {
public: 
    
cAsistenteAutomatico();
~cAsistenteAutomatico();
    
/**
 * @param cCliente
 */
void EntregarTicket(cCliente);
void AsignarEmpleado(cCliente cliente);
protected: 
    
private: 
    static int clientesAtendidos;
};

#endif //_CASISTENTEAUTOMÁTICO_H