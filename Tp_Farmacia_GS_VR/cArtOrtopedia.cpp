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

cArtOrtopedia::cArtOrtopedia(string articuloortopedia,double precio, const string codigo, double stock,bool empaqueEspecial, bool conReceta, string instruccionesDeUso,eOrtopedia productos)
    :cArticulos(articuloortopedia, Precio, codigo, Stock) {
    this->ConReceta = conReceta;
    this->EmpaqueEspecial = empaqueEspecial;
    this->Productos = productos;
}

cArtOrtopedia::~cArtOrtopedia()
{
}


/**
 * @param string
 * @return void
 */
void cArtOrtopedia::set_InstruccionesDeUso(string) {

    string insaux = "debe ajustarse por la evilla de atras";
    this->InstruccionesDeUso = insaux;;
}