/**
 * Project Untitled
 */

#ifndef _CARTICULOS_H
#define _CARTICULOS_H
#include <iostream>
#include <string>
using namespace std;


class cArticulos {
public:

    /**
     * @param string Articulo
     * @param double Precio
     * @param const string Codigo
     * @param double Stock
     */
    

    cArticulos(string nombrearticulo, double Precio, const string codigo, double Stock);
    cArticulos();
    ~cArticulos();
    void get_Articulo();

    /**
     * @param double
     */
    void set_Stock(double);

    /**
     * @param double
     */
    void set_Precio(double);

    void get_codigo();
    double get_Precio();
  
protected:
    string NombreArticulo;
    double Precio;
    const string Codigo;
    double Stock;
};

#endif //_CARTICULOS_H