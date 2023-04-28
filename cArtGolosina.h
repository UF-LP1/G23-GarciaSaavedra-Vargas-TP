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
void artGolosina(void bool Frio, void string Promocion);
    
void get_Frio();
    
/**
 * @param string
 */
void set_Promocion(void string);
protected: 
    
void artGolosina();
private: 
    bool Frio;
    string Promocion;
};

#endif //_CARTGOLOSINA_H