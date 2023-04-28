/**
 * Project Untitled
 */


#ifndef _CARTPERFUMERÍA_H
#define _CARTPERFUMERÍA_H

#include "cArticulos.h"


class cArtPerfumería: public cArticulos {
public: 
    
/**
 * @param string Origen
 * @param bool Importado
 * @param ePerfumeria Productos
 */
void artPerfumería(void string Origen, void bool Importado, void ePerfumeria Productos);
    
void get_Imprortado();
    
/**
 * @param string
 */
void set_Origen(void string);
protected: 
    
void artPerfumeria();
private: 
    string Origen;
    bool Importado;
    ePerfumeria Productos;
};

#endif //_CARTPERFUMERÍA_H