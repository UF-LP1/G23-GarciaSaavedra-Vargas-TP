/**
 * Project Untitled
 */


#ifndef _CARTICULOS_H
#define _CARTICULOS_H

class cArticulos {
public: 
    
/**
 * @param string Articulo
 * @param double Precio
 * @param const string Codigo
 * @param double Stock
 */
void cArticulos(void string Articulo, void double Precio, void const string Codigo, void double Stock);
    
void get_Articulo();
    
/**
 * @param double
 */
void set_Stock(void double);
    
/**
 * @param double
 */
void set_Precio(void double);
    
void get_codigo();
protected: 
    string Articulo;
    double Precio;
    const string Codigo;
    double Stock;
    
void cArticulos();
};

#endif //_CARTICULOS_H