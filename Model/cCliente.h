/**
 * Project Untitled
 */


#ifndef _CCLIENTE_H
#define _CCLIENTE_H
#include <iostream>
#include <string>
using namespace std;
#include "eMediosDePago.h"
#include "eNecesidad.h"
#include "cTicket.h"

class cCliente {
public: 
    bool EstadoDeAtencion;

/**
 * @param string NombreYApellido
 * @param const double Dni
 * @param bool Receta
 * @param eMediosDePago MedioDePago
 * @param const string Mail
 * @param eNecesidad Necesidad
 * @param string ProductoAComprar
 */
cCliente(cTicket ticket,string NombreYApellido,const double Dni, bool Receta, eMediosDePago MedioDePago,const string Mail,eNecesidad Necesidad,string ProductoAComprar);
~cCliente();
/**
 * @param Codigo
 */
void SeleccionarProducto(const double Codigo);
    
eMediosDePago SeleccionarMedioPago(eMediosDePago);
    
void Pagar();
    
void get_necesidad();
    
/**
 * @param cTicket
 */
cTicket RecibirTicket();


protected:
void Cliente();
private: 
    cTicket ticket;
    bool Receta;
    string NombreYApellido;
    const string Dni;
    const string Mail;
    eNecesidad Necesidad;
};

#endif //_CCLIENTE_H