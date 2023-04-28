/**
 * Project Untitled
 */


#ifndef _CFARMACIA_H
#define _CFARMACIA_H
#include <iostream>
#include <string>
using namespace std;
#include"cArticulos.h"
#include "cEpleado.h"


class cFarmacia {
public: 
    double GananciaTotal;
    
/**
 * @param string Nombre
 * @param string Direccion
 * @param time Horario
 * @param const string Telefono
 * @param bool Estado
 * @param double GananciaTotal
 */
void Farmacia(string Nombre,string Direccion, time_t Horario,const string Telefono,bool Estado,double GananciaTotal);
    
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
void Cobrar( cCliente);
protected: 
    
void Farmacia();
private: 
    string Nombre;
    string Direccion;
    time_t Horario;
    const string Telefono;
    bool Estado;
};

#endif //_CFARMACIA_H