/**
 * Project Untitled
 */


#ifndef _CEMPLEADOLIMPIEZA_H
#define _CEMPLEADOLIMPIEZA_H
#include <iostream>
#include <string>
using namespace std;


#include "cEmpleado.h"


class cEmpleadoLimpieza: public cEmpleado {
public: 
    
/**
 * @param NombreYAppelido
 * @param Dni
 * @param Horario
 */
cEmpleadoLimpieza(const string NombreYAppelido, const string Dni, time_t Horario);
~cEmpleadoLimpieza();
void LimpiarYOrdenar();    

private: 
    string ProductosLimpieza;
};

#endif //_CEMPLEADOLIMPIEZA_H