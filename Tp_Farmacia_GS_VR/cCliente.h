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
   
cCliente(string nombreYApellido,const double dni, string mail,eNecesidad Necesidad,vector<cArticulos*> productosAComprar, double billetera,cCarrito carrito);
cCliente();
~cCliente();

/**
 * @param Codigo
 */
void SeleccionarProducto(const double Codigo,cArticulos* articulos, vector<cArticulos*> productosAComprar);
void SeleccionarMedioPago();
double get_Billetera(); 
void set_Billetera(double billetera);
eNecesidad get_necesidad();
cCarrito get_Carrito();
vector<cArticulos*> get_Productos();
cTicket* get_Ticket();
void set_ticket(cTicket* ticket);
eMediosDePago get_MediosDePago();
string get_datos();

/**
 * @param cTicket
 */
private: 
    cTicket* Ticket;
    string NombreYApellido;
    vector<cArticulos*> ProductosAComprar;
    const double Dni;
    string Mail;
    eNecesidad Necesidad;
    eMediosDePago MediosDePago;
    double Billetera;
    cCarrito Carrito;
};
    
#endif //_CCLIENTE_H