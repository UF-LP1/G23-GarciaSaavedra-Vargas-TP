/**
 * Project Untitled
 */
#include "cArtPerfumeria.h"

/**
 * cArtPerfumeria implementation
 */

/**
 * @param string Origen
 * @param bool Importado
 * @param ePerfumeria Productos
 */
cArtPerfumeria::cArtPerfumeria(string nombrearticulo, double Precio, const string codigo, double Stock,string Origen,bool Importado, ePerfumeria Productos)
    :cArticulos(nombrearticulo, Precio, codigo, Stock){

}

/**
 * @return void
 */
bool cArtPerfumeria::get_Imprortado() {
    return Importado;
}

/**
 * @param string
 * @return void
 */
string cArtPerfumeria::get_Origen() {
    return Origen;
}

cArtPerfumeria:: ~cArtPerfumeria() {

}