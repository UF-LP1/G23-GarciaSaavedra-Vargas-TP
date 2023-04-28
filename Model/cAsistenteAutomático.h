/**
 * Project Untitled
 */


#ifndef _CASISTENTEAUTOMÁTICO_H
#define _CASISTENTEAUTOMÁTICO_H

class cAsistenteAutomático {
public: 
    
void AsistenteAutomático();
    
/**
 * @param cCliente
 */
void EntregarTicket(cCliente);
protected: 
    
void AsistenteAutomatico();
private: 
    static int clientesAtendidos;
};

#endif //_CASISTENTEAUTOMÁTICO_H