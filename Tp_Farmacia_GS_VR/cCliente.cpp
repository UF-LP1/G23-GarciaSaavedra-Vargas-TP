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
 cCliente::cCliente(cTicket ticket,string nombreYApellido,double dni, bool receta,eMediosDePago MedioDePago,  string mail, eNecesidad Necesidad, string productoAComprar, double billetera):Dni(dni){
     this->Receta = receta;
     this->NombreYApellido = nombreYApellido;
     this-> ProductoAComprar = productoAComprar;
     this->Billetera = billetera;

 }
 cCliente::cCliente():Dni(0) {
     this->Receta = {};
     this->Billetera = 0;
     this->Necesidad = Pami;
 }
/* cCliente::cCliente(double dni):Dni(dni){// NO ENTIENDO QUE PASA CON ESTE CONSTRUCTOR
     
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
    this->ticket.set_MedotoDePago(opcionSeleccionada);
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