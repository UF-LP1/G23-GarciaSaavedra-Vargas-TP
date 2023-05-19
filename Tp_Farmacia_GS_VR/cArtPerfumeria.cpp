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
void cArtPerfumeria::get_Imprortado() {
    return;
}

/**
 * @param string
 * @return void
 */
void cArtPerfumeria::set_Origen(string) {
    return;
}

cArtPerfumeria:: ~cArtPerfumeria() {

}