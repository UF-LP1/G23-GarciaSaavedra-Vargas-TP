/**
 * Project Untitled
 */
#include "cCliente.h"

/**
 * cCliente implementation
 */
/**
 * @param string NombreYApellido
 * @param const double Dni
 * @param bool Receta
 * @param eMediosDePago MedioDePago
 * @param const string Mail
 * @param eNecesidad Necesidad
 * @param string ProductoAComprar
 */

 cCliente::cCliente(cTicket ticket,string nombreYApellido,double dni, eMediosDePago MedioDePago, string mail, eNecesidad Necesidad, vector<cArticulos*> productosAComprar, double billetera,cCarrito carrito):Dni(dni){
     this->NombreYApellido = nombreYApellido;
     this->ProductosAComprar = productosAComprar;
     this->Billetera = billetera;
 }
 cCliente::cCliente():Dni(0) {
     this->Billetera = 0;
     this->Necesidad = Pami;
 }

 cCliente::~cCliente(){
 }
/**
 * @param Codigo
 * @return void
 */

void cCliente::SeleccionarProducto(const double Codigo,cArticulos* articulos, vector<cArticulos*> productosAComprar) {
   
    this->ProductosAComprar.push_back(articulos);

}

/**
 * @return void
 */
void cCliente::SeleccionarMedioPago() {
    srand(time(nullptr));
    int optionNum = std::rand() % 4;

    eMediosDePago opcionSeleccionada{};

    switch (optionNum) {
    case 0:
        opcionSeleccionada = Efectivo;
        break;
    case 1:
        opcionSeleccionada = Debito;
        break;
    case 2:
        opcionSeleccionada = Credito;
        break;
    case 3:
        opcionSeleccionada = PagoCelular;
        break;
    }
    this->ticket.set_MetodoDePago(opcionSeleccionada);
}

/**
 * @return void
 */

/**
 * @return eNecesidad
 */
eNecesidad cCliente::get_necesidad() {
    return Necesidad;
}
double cCliente::get_Billetera() {

    return Billetera;
}

cCarrito cCliente::get_Carrito() {
    return this->Carrito;
}

vector<cArticulos*> cCliente::get_Productos() { //funcion que devuelve el vector de productos elegidos por el cliente
    return this->ProductosAComprar;
}

void cCliente::set_Billetera(double billetera) {
    
    this->Billetera = billetera;
}


/**
 * @param cTicket
 * @return void
 */
cTicket cCliente::RecibirTicket() {
   
    return ticket;
}