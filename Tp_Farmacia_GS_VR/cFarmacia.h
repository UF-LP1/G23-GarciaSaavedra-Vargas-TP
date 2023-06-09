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
#include "cAsistenteAutomatico.h"
#include "cArticulos.h"

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

cFarmacia(cCaja caja,string Nombre,string Direccion, string horario,const string telefono,bool estado,cAsistenteAutomatico asistente);
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
void RecibirCliente();
    
/**
 * @param cCliente
 */
void Ganancia(cCaja caja);

private: 
    cCaja Caja;
    string Nombre;
    string Direccion;
    string Horario;
    const string Telefono;
    bool Estado;
    double GananciaTotal;
    cAsistenteAutomatico Asistente;
};

#endif //_CFARMACIA_H