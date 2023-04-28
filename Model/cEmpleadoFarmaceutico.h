/**
 * Project Untitled
 */


#ifndef _CEMPLEADOFARMACEUTICO_H
#define _CEMPLEADOFARMACEUTICO_H

#include "cEpleado.h"


class cEmpleadoFarmaceutico: public cEpleado {
public: 
    
/**
 * @param const string Matricula
 */
cEmpleadoFarmaceutico(const string Matricula);
    
void AplicarDescuento();
protected: 
    
cEmpleadoFarmaceutico();
private: 
    const string Matricula;
};

#endif //_CEMPLEADOFARMACEUTICO_H