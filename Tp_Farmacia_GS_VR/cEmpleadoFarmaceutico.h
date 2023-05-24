/**
 * Project Untitled
 */


#ifndef _CEMPLEADOFARMACEUTICO_H
#define _CEMPLEADOFARMACEUTICO_H

#include "cEmpleado.h"

class cEmpleadoFarmaceutico: public cEmpleado {
public: 
    
/**
 * @param const string Matricula
 */
cEmpleadoFarmaceutico(string nombrefarmaceutico, const string dni, string horario, queue<cCliente> listaclientes, string matricula);
cEmpleadoFarmaceutico();
~cEmpleadoFarmaceutico();
    

void AplicarDescuento();
//podria haber un metodo virtual que use el que esta en empleado pero aca solo sirva para medicamentos

private: 
    string Matricula;
};

#endif //_CEMPLEADOFARMACEUTICO_H