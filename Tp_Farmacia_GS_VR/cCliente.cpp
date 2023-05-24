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

 cCliente::cCliente(string nombreYApellido,double dni, string mail, eNecesidad Necesidad, vector<cArticulos*> productosAComprar, double billetera,cCarrito carrito):Dni(dni){
     this->NombreYApellido = nombreYApellido;
     this->ProductosAComprar = productosAComprar;
     this->Billetera = billetera;
     this->Ticket = nullptr;
     this->MediosDePago = Efectivo;
     
 }
 cCliente::cCliente():Dni(0) {
     this->Billetera = 0;
     this->Necesidad = Particular;
     this->MediosDePago = Efectivo;
     this->Ticket = nullptr;


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
    Ticket->set_MetodoDePago(opcionSeleccionada);
    this->MediosDePago = opcionSeleccionada;
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

eMediosDePago cCliente::get_MediosDePago() {
    return this->MediosDePago;
}

string cCliente::get_datos()
{
    return this->NombreYApellido;
}


/**
 * @param cTicket
 * @return void
 */
cTicket* cCliente::get_Ticket() {
   
    return Ticket;
}

void cCliente::set_ticket(cTicket* ticket)
{
    this->Ticket = ticket;
}
