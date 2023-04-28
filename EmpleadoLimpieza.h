/**
 * Project Untitled
 */


#ifndef _EMPLEADOLIMPIEZA_H
#define _EMPLEADOLIMPIEZA_H

#include "cEpleado.h"


class EmpleadoLimpieza: public cEpleado {
public: 
    
/**
 * @param NombreYAppelido
 * @param Dni
 * @param Horario
 */
void EmpleadoLimpieza(void NombreYAppelido, void Dni, void Horario);
    
void LimpiarYOrdenar();
protected: 
    
void EmpleadoLimpieza();
private: 
    string ProductosLimpieza;
};

#endif //_EMPLEADOLIMPIEZA_H