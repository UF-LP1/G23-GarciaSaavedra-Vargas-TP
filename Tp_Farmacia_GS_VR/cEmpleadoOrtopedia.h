/**
 * Project Untitled
 */


#ifndef _CEMPLEADOORTOPEDIA_H
#define _CEMPLEADOORTOPEDIA_H

#include "cEmpleado.h"


class cEmpleadoOrtopedia: public cEmpleado {
public: 
    
cEmpleadoOrtopedia(string nombrefarmaceutico, const string dni, string horario, queue<cCliente> colaclientes);
~cEmpleadoOrtopedia();
    
};

#endif //_CEMPLEADOORTOPEDIA_H