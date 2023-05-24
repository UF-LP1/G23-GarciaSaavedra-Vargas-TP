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
cArtOrtopedia(string articuloortopedia,double precio, const string codigo, double stock,bool empaqueEspecial, bool conReceta,string instruccionesDeUso,eOrtopedia productos);
~cArtOrtopedia();
    
/**
 * @param string
 */
void set_InstruccionesDeUso(string);
protected: 
    
private: 
    bool EmpaqueEspecial;
    bool ConReceta;
    string InstruccionesDeUso;
    eOrtopedia Productos;
};

#endif //_CARTORTOPEDIA_H