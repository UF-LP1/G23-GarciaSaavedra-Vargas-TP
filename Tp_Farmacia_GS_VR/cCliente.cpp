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
 cCliente::cCliente(cTicket ticket,string nombreYApellido,double dni, bool receta,eMediosDePago MedioDePago,  string mail, eNecesidad Necesidad, string productoAComprar, double pago):Dni(dni){
     this->Receta = receta;
     this->NombreYApellido = nombreYApellido;
     this-> ProductoAComprar = productoAComprar;
     this->Pago = pago;

 }
 cCliente::cCliente(double dni):Dni(dni){// NO ENTIENDO QUE PASA CON ESTE CONSTRUCTOR
     
 }


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