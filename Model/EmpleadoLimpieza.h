/**
 * Project Untitled
 */


#ifndef _EMPLEADOLIMPIEZA_H
#define _EMPLEADOLIMPIEZA_H
#include <iostream>
#include <string>
using namespace std;


#include "cEpleado.h"


class EmpleadoLimpieza: public cEpleado {
public: 
    
/**
 * @param NombreYAppelido
 * @param Dni
 * @param Horario
 */
EmpleadoLimpieza( const string NombreYAppelido, const string Dni, time_t Horario);
    
void LimpiarYOrdenar();    
~EmpleadoLimpieza();
private: 
    string ProductosLimpieza;
};

#endif //_EMPLEADOLIMPIEZA_H