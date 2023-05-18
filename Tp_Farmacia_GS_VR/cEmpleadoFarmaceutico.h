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
cEmpleadoFarmaceutico(string matricula);
cEmpleadoFarmaceutico();
~cEmpleadoFarmaceutico();
    
void AplicarDescuento(cTicket ticket1, cCliente cliente1);
void AgregarACarrito();


private: 
    string Matricula;
};

#endif //_CEMPLEADOFARMACEUTICO_H