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

cEmpleado::cEmpleado(string NombreYApellido, const string Dni, string Horario, queue<cCliente> listaclientes) {
}
cEmpleado::cEmpleado() {
}
cEmpleado::~cEmpleado() {
}


void cEmpleado::AgregarACarrito() { //en esta funcion el empleado recibe lo que quiere el cliente y lo agrega al carrito
    
    while (!listaclientes.empty()) {
        cCliente cliaux = listaclientes.front();
        listaclientes.pop();

        cCarrito carritoaux = cliaux.get_Carrito();
        vector<cArticulos*> vectorartaux;
        vectorartaux = cliaux.get_Productos();

        for (int i = 0; i < vectorartaux.size(); i++)
        {
            cArticulos artaux = *vectorartaux[i];//aca le paso lo que tiene adentro
            if(artaux.get_stock()!=0.0)
            carritoaux.set_articulos(&artaux);//aca le paso la direccion en la que esta, porque eso requiere el metodo de carrito
        }

        //HAGO LA LIBERACION DE ESTE VECTOR DE AARTICULOS DINAMICOS ACA?
        for (auto aux = vectorartaux.begin(); aux != vectorartaux.end(); ++aux) {
            delete* aux;
        }
        vectorartaux.clear();
    }
}

/**
 * @param cTicket
 * @return void
 */

/**
 * @param cTicket
 * @return void
 */
 