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
void Cliente(string NombreYApellido,const double Dni, bool Receta, eMediosDePago MedioDePago,const string Mail,eNecesidad Necesidad,string ProductoAComprar);
    
/**
 * @param Codigo
 */
void SeleccionarProducto(const double Codigo);
    
void SeleccionarMedioPago();
    
void Pagar();
    
eNecesidad get_necesidad();
    
/**
 * @param cTicket
 */
void RecibirTicket(cTicket);
protected: 
    
void Cliente();
private: 
    bool Receta;
    string NombreYApellido;
    const string Dni;
    const string Mail;
    eNecesidad Necesidad;
};

#endif //_CCLIENTE_H