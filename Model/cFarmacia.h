/**
 * Project Untitled
 */


#ifndef _CFARMACIA_H
#define _CFARMACIA_H
/*#include <iostream>
#include <string>*/
using namespace std;
//#include"cArticulos.h"
#include "cEmpleado.h"
#include "cCaja.h"
#include"cAsistenteAutomatico.h"

class cFarmacia {
public: 
    
    
/**
 * @param string Nombre
 * @param string Direccion
 * @param time Horario
 * @param const string Telefono
 * @param bool Estado
 * @param double GananciaTotal
 */
cFarmacia(cCaja caja,string Nombre,string Direccion, time_t Horario,const string Telefono,bool Estado,double GananciaTotal);
//cFarmacia();
~cFarmacia();

void EstadoFarmacia();
    
/**
 * @param cArticulos
 */
void ChequearStock(cArticulos);
    
/**
 * @param cCliente
 * @param cArticulos
 */
void RecibirCliente(cCliente,cArticulos);
    
/**
 * @param cCliente
 */
void Cobrar(cCliente cliente);

private: 
    cCaja caja;//NO ENTIENDO ESTE ERROR - NO ME TOMA CAJA
    string Nombre;
    string Direccion;
    time_t Horario;
    const string Telefono;
    bool Estado;
    double GananciaTotal;
};

#endif //_CFARMACIA_H