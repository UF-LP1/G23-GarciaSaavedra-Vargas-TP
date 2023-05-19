/**
 * Project Untitled
 */


#ifndef _CCLIENTE_H
#define _CCLIENTE_H
/*#include <iostream>
#include <string>*/
using namespace std;
#include "eMediosDePago.h"
#include "eNecesidad.h"
#include "cTicket.h"
#include "cCarrito.h"

class cCliente {
public: 
    

/**
 * @param string NombreYApellido
 * @param const double Dni
 * @param bool Receta
 * @param eMediosDePago MedioDePago
 * @param const string Mail
 * @param eNecesidad Necesidad
 * @param string ProductoAComprar
 */
   
cCliente(cTicket ticket,string nombreYApellido,const double dni, bool receta, eMediosDePago MedioDePago, string mail,eNecesidad Necesidad,string productoAComprar, double billetera,cCarrito carrito);
cCliente();
~cCliente();

/**
 * @param Codigo
 */
void SeleccionarProducto(const double Codigo,cArticulos articulos,cCarrito carrito);
void SeleccionarMedioPago(eMediosDePago);
double get_Billetera(); 
void set_Billetera(double billetera);
eNecesidad get_necesidad();
cTicket RecibirTicket();
/**
 * @param cTicket
 */
private: 
    cTicket ticket;
    bool Receta;
    string NombreYApellido;
    string ProductoAComprar;
    const double Dni;
    string Mail;
    eNecesidad Necesidad;
    double Billetera;
    cCarrito Carrito;
};
    
#endif //_CCLIENTE_H