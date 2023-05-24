/**
 * Project Untitled
 */


#include "cEmpleadoLimpieza.h"

/**
 * cEmpleadoLimpieza implementation
 */

/**
 * @param NombreYAppelido
 * @param Dni
 * @param Horario
 */

cEmpleadoLimpieza::cEmpleadoLimpieza(const string NombreYAppelido, const string Dni,queue<cCliente> listaclientes, string Horario)
:cEmpleado(NombreYApellido, Dni, Horario,listaclientes){
    
}
cEmpleadoLimpieza::~cEmpleadoLimpieza()
{
}
/**
 * @return void
 */
void cEmpleadoLimpieza::LimpiarYOrdenar() {
    return;
}