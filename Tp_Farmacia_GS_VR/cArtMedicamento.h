/**
 * Project Untitled
 */


#ifndef _CARTMEDICAMENTO_H
#define _CARTMEDICAMENTO_H

#include "cArticulos.h"
#include "eMedicamentos.h"
#include <iostream>
#include <string>
using namespace std;
class cArtMedicamento: public cArticulos {
public: 
    
/**
 * @param string Dosis
 * @param bool VentaLibre
 * @param string IndicacionesEspeciales
 * @param eMedicamentos Productos
 */
cArtMedicamento(string Dosis,string IndicacionesEspeciales,eMedicamentos Productos);
~cArtMedicamento(); 
void get_Dosis();
      
private: 
    string Dosis;
    bool VentaLibre;
    string IndicacionesEspeciales;
    eMedicamentos Productos;
};

#endif //_CARTMEDICAMENTO_H