/**
 * Project Untitled
 */


#include "cArtMedicamento.h"

/**
 * cArtMedicamento implementation
 */


/**
 * @param string Dosis
 * @param bool VentaLibre
 * @param string IndicacionesEspeciales
 * @param eMedicamentos Productos
 */
cArtMedicamento::cArtMedicamento(string Dosis,string IndicacionesEspeciales, eMedicamentos Productos)
    :cArticulos(Articulo, Precio, Codigo, Stock) {

}

cArtMedicamento::~cArtMedicamento()
{
}

/**
 * @return void
 */
void cArtMedicamento::get_Dosis() {
    return;
}
