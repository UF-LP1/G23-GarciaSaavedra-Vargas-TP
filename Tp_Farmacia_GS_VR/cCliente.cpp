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
 cCliente::cCliente(cTicket ticket,string NombreYApellido,const double dni, bool Receta,eMediosDePago MedioDePago, const string mail, eNecesidad Necesidad, string ProductoAComprar, double pago):Mail(mail), Dni(dni){
 }
 /*cCliente::cCliente() {
 }*/

 cCliente::~cCliente(){
 }
/**
 * @param Codigo
 * @return void
 */
void cCliente::SeleccionarProducto(const double Codigo) {


    return;
}

/**
 * @return void
 */
void cCliente::SeleccionarMedioPago(eMediosDePago) {
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
    //eMediosDePago medioactual = opcionSeleccionada;
    this->ticket.set_MedotoDePago(opcionSeleccionada);
}

/**
 * @return void
 */
void cCliente::Pagar() {
    return;
}

/**
 * @return eNecesidad
 */
void cCliente::get_necesidad() {
    return;
}

/**
 * @param cTicket
 * @return void
 */
cTicket cCliente::RecibirTicket() {
   
    return ticket;
}

