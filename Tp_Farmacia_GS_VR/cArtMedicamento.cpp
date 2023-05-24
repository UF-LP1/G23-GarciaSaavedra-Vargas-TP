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
cArtMedicamento::cArtMedicamento(string nombredroga, double precio, const string codigo, double stock, string dosis, string indicacionesespeciales, eMedicamentos drogas)
    :cArticulos(NombreArticulo, Precio, Codigo, Stock) {
    this->NombreArticulo = nombredroga;
    this->Precio = precio;
    this->Stock = stock;
    this->Dosis = dosis;
    this->IndicacionesEspeciales = indicacionesespeciales;
    this->Drogas = drogas;

}

cArtMedicamento::cArtMedicamento()
{
}

cArtMedicamento::~cArtMedicamento()
{
}

/**
 * @return void
 */
string cArtMedicamento::get_Dosis() {
    return Dosis;
}
