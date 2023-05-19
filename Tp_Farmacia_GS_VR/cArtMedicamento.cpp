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
cArtMedicamento::cArtMedicamento(string NombreArticulos, double Precio, const string codigo, double Stock,string Dosis, string IndicacionesEspeciales, eMedicamentos productos)
    :cArticulos(NombreArticulo, Precio, Codigo, Stock) {
    this->Productos = productos;
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
