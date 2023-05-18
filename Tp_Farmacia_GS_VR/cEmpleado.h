/**
 * Project Untitled
 */


#ifndef _CEMPLEADO_H
#define _CEMPLEADO_H
/*#include <iostream>
#include <string>*/
#include <time.h>
#include <vector>
using namespace std;
#include "cCliente.h"

class cEmpleado {
public: 
    
/**
 * @param eTipoDeEmpleado Empleado
 * @param string NombreYApellido
 * @param const string Dni
 * @param time Horario
 */
    
cEmpleado(string NombreYApellido,const string Dni, time_t Horario);
cEmpleado();
~cEmpleado();
    
/**
 * @param cCliente
 * @param cArticulos
 */
void AtenderCliente(cCliente);
void AgregarACarrito(cArticulos articulo);
    
/**
 * @param cTicket
 */
    
/**
 * @param cTicket
 */

protected: 
    string NombreYApellido;
    const string Dni;
    time_t Horario{};
    vector<cCliente> listaclientes;

};

#endif //_CEMPLEADO_H