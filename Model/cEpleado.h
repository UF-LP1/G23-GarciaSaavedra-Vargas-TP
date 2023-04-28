/**
 * Project Untitled
 */


#ifndef _CEPLEADO_H
#define _CEPLEADO_H
#include <iostream>
#include <string>
#include <time.h>
using namespace std;
#include "cCliente.h"

class cEpleado {
public: 
    
/**
 * @param eTipoDeEmpleado Empleado
 * @param string NombreYApellido
 * @param const string Dni
 * @param time Horario
 */
void cEmpleadoVentas(string NombreYApellido,const string Dni, time_t Horario);
    
/**
 * @param cCliente
 * @param cArticulos
 */
void AtenderCliente(cCliente,cArticulos);
    
/**
 * @param cTicket
 */
void DarConsejosYRecomendaciones(cTicket);
    
/**
 * @param cTicket
 */
void AplicarDescuento(cTicket);
protected: 
      string NombreYApellido;
    const string Dni;
    time_t Horario;
    
void cEmpleado();
};

#endif //_CEPLEADO_H