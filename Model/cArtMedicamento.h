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
void artMedicamento(string Dosis, bool VentaLibre, string IndicacionesEspeciales,eMedicamentos Productos);
    
void get_Dosis();
    
/**
 * @param bool
 */
void set_VentaLibre(bool);
protected: 
    
void artMedicamento();
private: 
    string Dosis;
    bool VentaLibre;
    string IndicacionesEspeciales;
    eMedicamentos Productos;
};

#endif //_CARTMEDICAMENTO_H