/**
 * Project Untitled
 */


#ifndef _CARTPERFUMERÍA_H
#define _CARTPERFUMERÍA_H

#include "cArticulos.h"
#include "ePerfumeria.h"


class cArtPerfumería: public cArticulos {
public: 
    
/**
 * @param string Origen
 * @param bool Importado
 * @param ePerfumeria Productos
 */
void artPerfumería(string Origen, bool Importado, ePerfumeria Productos);
    
void get_Imprortado();
    
/**
 * @param string
 */
void set_Origen(string);
protected: 
    
void artPerfumeria();
private: 
    string Origen;
    bool Importado;
    ePerfumeria Productos;
};

#endif //_CARTPERFUMERÍA_H