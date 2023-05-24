/**
 * Project Untitled
 */


#ifndef _CEMPLEADO_H
#define _CEMPLEADO_H
/*#include <iostream>
#include <string>*/
#include <time.h>
#include <vector>
#include <queue>
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
    
cEmpleado(string NombreYApellido,const string Dni, string Horario, queue<cCliente> listaclientes);
cEmpleado();
~cEmpleado();
    
/**
 * @param cCliente
 * @param cArticulos
 */

void AgregarACarrito();//quiero hacerla virtual para que los distintos empleados la usen para agregar 
    
/**
 * @param cTicket
 */
    
/**
 * @param cTicket
 */

protected: 
    string NombreYApellido;
    const string Dni;
    string Horario;
    queue<cCliente> listaclientes;
};

#endif //_CEMPLEADO_H