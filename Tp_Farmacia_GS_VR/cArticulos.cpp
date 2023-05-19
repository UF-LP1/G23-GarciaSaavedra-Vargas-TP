/**
 * Project Untitled
 */


#include "cArticulos.h"

/**
 * cArticulos implementation
 */


cArticulos::cArticulos(string nombrearticulo, double Precio, const string codigo, double Stock):Codigo(codigo)
{
    this->NombreArticulo = nombrearticulo;

}

/**
 * @param string Articulo
 * @param double Precio
 * @param const string Codigo
 * @param double Stock
 */

cArticulos::cArticulos()
{
}
cArticulos::~cArticulos()
{
}
/**
 * @return void
 */
void cArticulos::get_Articulo() {
    return;
}

/**
 * @param double
 * @return void
 */
void cArticulos::set_Stock(double) {
    return;
}

/**
 * @param double
 * @return void
 */
void cArticulos::set_Precio(double) {
    return;
}

/**
 * @return void
 */
void cArticulos::get_codigo() {
    return;
}

double cArticulos::get_Precio() {
    return Precio;
}

