/**
 * Project Untitled
 */


#ifndef _CARTMEDICAMENTO_H
#define _CARTMEDICAMENTO_H

#include "cArticulos.h"


class cArtMedicamento: public cArticulos {
public: 
    
/**
 * @param string Dosis
 * @param bool VentaLibre
 * @param string IndicacionesEspeciales
 * @param eMedicamentos Productos
 */
void artMedicamento(void string Dosis, void bool VentaLibre, void string IndicacionesEspeciales, void eMedicamentos Productos);
    
void get_Dosis();
    
/**
 * @param bool
 */
void set_VentaLibre(void bool);
protected: 
    
void artMedicamento();
private: 
    string Dosis;
    bool VentaLibre;
    string IndicacionesEspeciales;
    eMedicamentos Productos;
};

#endif //_CARTMEDICAMENTO_H