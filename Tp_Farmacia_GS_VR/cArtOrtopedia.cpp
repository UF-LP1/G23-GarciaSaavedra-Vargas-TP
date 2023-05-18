/**
 * Project Untitled
 */


#include "cArtOrtopedia.h"

/**
 * cArtOrtopedia implementation
 */


/**
 * @param bool EmpaqueEspecial
 * @param bool ConReceta
 * @param string InstruccionesDeUso
 */

cArtOrtopedia::cArtOrtopedia(bool EmpaqueEspecial, bool ConReceta, string InstruccionesDeUso)
    :cArticulos(Articulo, Precio, Codigo, Stock) {

}

cArtOrtopedia::~cArtOrtopedia()
{
}

/**
 * @return void
 */
void cArtOrtopedia::get_EntregaInstantanea() {
    return;
}

/**
 * @param string
 * @return void
 */
void cArtOrtopedia::set_InstruccionesDeUso(string) {
    return;
}