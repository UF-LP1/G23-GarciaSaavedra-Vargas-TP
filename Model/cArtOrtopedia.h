/**
 * Project Untitled
 */


#ifndef _CARTORTOPEDIA_H
#define _CARTORTOPEDIA_H

#include "cArticulos.h"
#include "eOrtopedia.h"


class cArtOrtopedia: public cArticulos {
public: 
    
/**
 * @param bool EmpaqueEspecial
 * @param bool ConReceta
 * @param string InstruccionesDeUso
 */
void artOrtopedia(bool EmpaqueEspecial, bool ConReceta,string InstruccionesDeUso);
    
void get_EntregaInstantanea();
    
/**
 * @param string
 */
void set_InstruccionesDeUso(string);
protected: 
    
void artOrtopedia();
private: 
    bool EmpaqueEspecial;
    bool ConReceta;
    string InstruccionesDeUso;
    eOrtopedia Productos;
};

#endif //_CARTORTOPEDIA_H