/**
 * Project Untitled
 */


#ifndef _CTICKET_H
#define _CTICKET_H

class cTicket {
public: 
    
/**
 * @param string CodigoTicket
 * @param double PrecioFinal
 * @param eMediosDePago MetodosDePago
 */
void Ticket(void string CodigoTicket, void double PrecioFinal, void eMediosDePago MetodosDePago);
    
void get_PrecioFinal();
    
/**
 * @param cArticulos
 */
void AgregarProducto(void cArticulos);
protected: 
    
void Ticket();
private: 
    const string CodigoTicket;
    double PrecioFinal;
    eMediosDePago MetodoDePago;
};

#endif //_CTICKET_H