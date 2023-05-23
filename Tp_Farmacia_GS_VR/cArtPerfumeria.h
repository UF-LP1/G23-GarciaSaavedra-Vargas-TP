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
cArtPerfumeria(string nombrearticulo,double Precio, const string codigo, double Stock,string Origen, bool Importado, ePerfumeria Productos);
~cArtPerfumeria();
    
bool get_Imprortado();
    
/**
 * @param string
 */
string get_Origen();

private: 
    string Origen;
    bool Importado;
    ePerfumeria Productos;
};

#endif //_CARTPERFUMERIA_H