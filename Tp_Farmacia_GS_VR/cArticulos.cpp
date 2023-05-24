/**
 * Project Untitled
 */


#include "cArticulos.h"

/**
 * cArticulos implementation
 */


cArticulos::cArticulos(string nombrearticulo, double precio, const string codigo, double stock):Codigo(codigo)
{
    this->NombreArticulo = nombrearticulo;
    this->Precio = precio;
    this->Stock = stock;
}

/**
 * @param string Articulo
 * @param double Precio
 * @param const string Codigo
 * @param double Stock
 */

cArticulos::cArticulos()
{
    this->Precio = 0;
    this->Stock = 0;
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

double cArticulos::get_stock()
{
    return this->Stock;
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

