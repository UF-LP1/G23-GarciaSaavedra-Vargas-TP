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

cArtOrtopedia::cArtOrtopedia(string articuloortopedia,double Precio, const string codigo, double Stock,bool EmpaqueEspecial, bool ConReceta, string InstruccionesDeUso,eOrtopedia productos)
    :cArticulos(articuloortopedia, Precio, codigo, Stock) {

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