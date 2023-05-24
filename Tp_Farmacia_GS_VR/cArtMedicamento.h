/**
 * Project Untitled
 */


#ifndef _CARTMEDICAMENTO_H
#define _CARTMEDICAMENTO_H

#include "cArticulos.h"
#include "eMedicamentos.h"

class cArtMedicamento: public cArticulos {
public: 
    
/**
 * @param string Dosis
 * @param bool VentaLibre
 * @param string IndicacionesEspeciales
 * @param eMedicamentos Productos
 */
cArtMedicamento(string nombredroga, double Precio, const string codigo, double Stock,string Dosis,string IndicacionesEspeciales,eMedicamentos drogas);
cArtMedicamento();
~cArtMedicamento();
string get_Dosis();
      
private: 
    string Dosis;
    string IndicacionesEspeciales;
    eMedicamentos Drogas;
};

#endif //_CARTMEDICAMENTO_H