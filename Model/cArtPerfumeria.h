/**
 * Project Untitled
 */


#ifndef _CARTPERFUMERIA_H
#define _CARTPERFUMERIA_H

#include "cArticulos.h"
#include "ePerfumeria.h"


class cArtPerfumeria: public cArticulos {
public: 
    
/**
 * @param string Origen
 * @param bool Importado
 * @param ePerfumeria Productos
 */
cArtPerfumeria(string Origen, bool Importado, ePerfumeria Productos);
~cArtPerfumeria();
    
void get_Imprortado();
    
/**
 * @param string
 */
void set_Origen(string);
protected: 
    
private: 
    string Origen;
    bool Importado;
    ePerfumeria Productos;
};

#endif //_CARTPERFUMERIA_H