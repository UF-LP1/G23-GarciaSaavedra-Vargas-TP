/**
 * Project Untitled
 */


#ifndef _CARTGOLOSINA_H
#define _CARTGOLOSINA_H

#include "cArticulos.h"


class cArtGolosina: public cArticulos {
public: 
    
/**
 * @param bool Frio
 * @param string Promocion
 */
cArtGolosina(string Promocion);
~cArtGolosina();
    
   
/**
 * @param string
 */
void set_Promocion(string);

protected: 
    
private: 
    string Promocion;
};

#endif //_CARTGOLOSINA_H