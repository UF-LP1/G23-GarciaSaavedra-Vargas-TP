/**
 * Project Untitled
 */


#include "cEmpleado.h"

/**
 * cEmpleado implementation
 */


/**
 * @param eTipoDeEmpleado Empleado
 * @param string NombreYApellido
 * @param const string Dni
 * @param time Horario
 */

cEmpleado::cEmpleado(string NombreYApellido, const string Dni, time_t Horario, vector<cCliente> listaclientes) {
}
cEmpleado::cEmpleado() {
}
cEmpleado::~cEmpleado() {
}

/**
 * @param cCliente
 * @param cArticulos
 * @return void
 */
void cEmpleado::AtenderCliente(cCliente cliente) {
    listaclientes.push_back(cliente);
}
void cEmpleado::AgregarACarrito(cCliente cliente) { //en esta funcion el empleado recibe lo que quiere el cliente y lo agrega al carrito
    cCarrito carritoaux = cliente.get_Carrito();
    vector<cArticulos*> vectorartaux;
    vectorartaux = cliente.get_Productos();
    for (int i = 0; i < vectorartaux.size(); i++)
    {
        cArticulos artaux = *vectorartaux[i];//aca le paso lo que tiene adentro
        carritoaux.set_articulos(&artaux);//aca le paso la direccion en la que esta, porque eso requiere el metodo de carrito
    }
    //HAGO LA LIBERACION DE ESTE VECTOR DE AARTICULOS DINAMICOS ACA?
    for (auto aux = vectorartaux.begin(); aux != vectorartaux.end(); ++aux) {
        delete* aux;
    }
    vectorartaux.clear();
}

/**
 * @param cTicket
 * @return void
 */

/**
 * @param cTicket
 * @return void
 */
 